C=properties.c pmsg_reader.c pmsg_writer.c logd_reader.c logd_writer.c config_read.c config_write.c local_logger.c log_event_list.c log_event_write.c logger_lock.c logger_name.c logger_read.c logger_write.c logprint.c stderr_write.c 

CPP=event_tag_map.cpp log_time.cpp log_ratelimit.cpp 

liblog.a: compile
	ar rcs out/android/$@ out/android/*.o

compile: $(C) $(CPP)
	-mkdir out
	-mkdir out/android
	clang -fPIC $(C) -c -Iinclude -I../include -include limits.h -include unistd.h -include sys/user.h -include signal.h -Werror -fvisibility=hidden -DLIBLOG_LOG_TAG=1006 -DSNET_EVENT_LOG_TAG=1397638484 
	clang -std=c++1y -fPIC $(CPP) -c -Iinclude -I../include -include string.h
	mv *.o out/android

clean:
	rm -rf out
