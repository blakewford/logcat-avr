C=

CPP=chrono_utils.cpp errors_unix.cpp file.cpp logging.cpp parsenetaddress.cpp quick_exit.cpp stringprintf.cpp strings.cpp test_utils.cpp 

libbase.a: compile
	ar rcs out/linux/$@ out/linux/*.o

compile: $(C) $(CPP)
	-mkdir out
	-mkdir out/avr
	avr-gcc $(CPP) -std=c++1y -c -I/usr/lib/avr/include -I/home/blakewford/avr-stl/include -I/usr/lib/gcc/avr/4.9.2/include -include sys/types.h -include stdlib.h -I../include/port -I../include -Iinclude -mmcu=atmega32u4 -w
	mv *.o out/avr

clean:
	rm -rf out
