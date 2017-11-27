#include "logger.h"
#ifdef __AVR__
#include <avr/io.h>
#endif

uint32_t loops = 0;
ssize_t recv(int sockfd, void *buf, size_t len, int flags)
{
  char Priority = (char)3; //D
  const char* message = " MDnsDS:MDnsSdListener::Hander starting up ";

  struct log_msg* log_msg = (struct log_msg*)buf;

  log_msg->entry_v1.len = strlen(message);
  log_msg->entry_v1.pid = getpid();
  log_msg->entry_v1.tid = gettid();
  log_msg->entry_v1.sec = time(NULL);

  memcpy(log_msg->entry_v1.msg, &Priority, 1); //First char is always priority
  memcpy(log_msg->entry_v1.msg+1, message+1, strlen(message));

  if(++loops == 196000)
  {
      write(1, "Done.\n", 6);
#ifdef __AVR__
      PORTB = 0x80;
#endif
      __builtin_trap();
  }

  // ASSERT(ret < LOGGER_ENTRY_MAX_LEN);
  return sizeof(struct logger_entry) + strlen(message);
}
