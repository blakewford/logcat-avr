C=fs.c multiuser.c socket_inaddr_any_server_unix.c socket_local_client_unix.c socket_local_server_unix.c socket_network_client_unix.c str_parms.c ashmem-host.c trace-host.c config_utils.c canned_fs_config.c hashmap.c iosched_policy.c load_file.c native_handle.c open_memstream.c record_stream.c strdup16to8.c strdup8to16.c strlcpy.c threads.c 

CPP=android_get_control_file.cpp sockets_unix.cpp fs_config.cpp sched_policy.cpp sockets.cpp 

libcutils.a: compile
	ar rcs out/not_windows/$@ out/not_windows/*.o

compile: $(C) $(CPP)
	-mkdir out
	-mkdir out/not_windows
	clang -fPIC $(C) -c -Iinclude -I../include -include limits.h -include unistd.h -include sys/user.h -include signal.h -Werror -Wall -Wextra 
	clang -std=c++1y -fPIC $(CPP) -c -Iinclude -I../include -include string.h
	mv *.o out/not_windows

clean:
	rm -rf out
