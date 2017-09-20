C=fs.c multiuser.c socket_inaddr_any_server_unix.c socket_local_client_unix.c socket_local_server_unix.c socket_network_client_unix.c str_parms.c ashmem-host.c trace-host.c config_utils.c canned_fs_config.c hashmap.c iosched_policy.c load_file.c native_handle.c open_memstream.c record_stream.c strdup16to8.c strdup8to16.c strlcpy.c threads.c 

CPP=android_get_control_file.cpp sockets_unix.cpp fs_config.cpp sched_policy.cpp sockets.cpp 

libcutils.a: compile
	ar rcs out/not_windows/$@ out/not_windows/*.o

compile: $(C) $(CPP)
	-mkdir out
	-mkdir out/avr
	avr-gcc $(C) -c -I/usr/lib/gcc/avr/4.9.2/include -include sys/types.h -include stdlib.h -I../include/port -I../include -Iinclude -mmcu=atmega32u4 -w
#	avr-gcc -std=c++1y $(CPP) -c -I/usr/lib/gcc/avr/4.9.2/include -I../include/port -I../include -Iinclude -mmcu=atmega32u4 -w
	mv *.o out/avr

clean:
	rm -rf out
