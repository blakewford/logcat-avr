CPP=logcat.cpp getopt_long.cpp logcat_system.cpp

#logcat: liblogcat.a
#	avr-gcc -gdwarf-4 -std=c++1y logcat_main.cpp -o out/$@ -I../include/port -Iinclude -Lout -llogcat -L../liblog/out/avr -llog -L../base/out/avr -lbase

liblogcat.a: $(CPP)
	-mkdir out
	avr-gcc -gdwarf-4 -c -include stdlib.h -std=c++1y $(CPP) -I../include/port -I../include -Iinclude -I../base/include
	mv *.o out
	ar rcs out/$@ out/*.o

clean:
	rm -rf out
