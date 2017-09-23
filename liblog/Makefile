C=properties.c pmsg_reader.c pmsg_writer.c logd_reader.c logd_writer.c config_read.c config_write.c local_logger.c log_event_list.c log_event_write.c logger_lock.c logger_name.c logger_read.c logger_write.c logprint.c stderr_write.c threads.c

CPP=event_tag_map.cpp log_time.cpp sched_policy.cpp

liblog.a: compile
	ar rcs out/android/$@ out/android/*.o

liblog-avr.a: compile-avr
	ar rcs out/avr/$@ out/avr/*.o

compile: $(C) $(CPP)
	-mkdir out
	-mkdir out/android
	clang -fPIC $(C) -c -Iinclude -I../include -include limits.h -include unistd.h -include sys/user.h -include signal.h -fvisibility=hidden -DLIBLOG_LOG_TAG=1006 -DSNET_EVENT_LOG_TAG=1397638484 -w
	clang -std=c++1y -fPIC $(CPP) -c -Iinclude -I../include -include string.h
	mv *.o out/android

compile-avr: $(C) $(CPP)
	-mkdir out
	-mkdir out/avr
	avr-gcc $(C) -c -include../include/port/port.h -I/usr/lib/avr/include -I/home/blakewford/avr-stl/include -I/usr/lib/gcc/avr/4.9.2/include -include sys/types.h -include stdlib.h -I../include/port -I../include -Iinclude -mmcu=atmega32u4 -fvisibility=hidden -DLIBLOG_LOG_TAG=1006 -DSNET_EVENT_LOG_TAG=1397638484 -w
#	avr-gcc -std=c++1y $(CPP) -c -I/usr/lib/gcc/avr/4.9.2/include -I../include/port -I../include -Iinclude -mmcu=atmega32u4 -w
	mv *.o out/avr

clean:
	rm -rf out
