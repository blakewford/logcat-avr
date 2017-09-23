#CPP=logcat.cpp
CPP=logcat2.cpp

logcat: liblogcat.a
	clang++ -gdwarf-4 -std=c++1y logcat_main.cpp -o out/$@ -Iinclude -Lout -llogcat -lpcrecpp -L../liblog/out/android -llog -lrt

liblogcat.a: $(CPP)
	-mkdir out
	clang -gdwarf-4 -c -std=c++1y -fPIC $(CPP) -I../include -Iinclude -I../base/include
	mv *.o out
	ar rcs out/$@ out/*.o

logcat-avr: liblogcat-avr.a
	avr-gcc -gdwarf-4 -std=c++1y logcat_main.cpp -o out/$@ -I../include/port -Iinclude -Lout -llogcat-avr -L../liblog/out/avr -llog-avr -mmcu=atmega32u4

liblogcat-avr.a: $(CPP)
	-mkdir out
	avr-gcc -gdwarf-4 -c -include../include/port/port.h -include stdlib.h -std=c++1y $(CPP) -I/usr/lib/avr/include -I../include/port -I../include -Iinclude -I../base/include -mmcu=atmega32u4
	mv *.o out
	ar rcs out/$@ out/*.o

clean:
	rm -rf out
