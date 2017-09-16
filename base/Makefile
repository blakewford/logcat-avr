C=

CPP=chrono_utils.cpp errors_unix.cpp file.cpp logging.cpp parsenetaddress.cpp quick_exit.cpp stringprintf.cpp strings.cpp test_utils.cpp 

libbase.a: compile
	ar rcs out/linux/$@ out/linux/*.o

compile: $(C) $(CPP)
	-mkdir out
	-mkdir out/linux
	clang -std=c++1y -fPIC $(CPP) -c -Iinclude -I../include -include string.h
	mv *.o out/linux

clean:
	rm -rf out
