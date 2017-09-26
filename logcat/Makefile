#CPP=logcat.cpp
CPP=logcat2.cpp

DEVICE=atmega1284

DEBUG=
OPTIM=-Ofast

logcat: liblogcat.a
	clang++ $(OPTIM) $(DEBUG) -std=c++1y logcat_main.cpp -o out/$@ -Iinclude -Lout -llogcat -lpcrecpp -L../liblog/out/android -llog -lrt

liblogcat.a: $(CPP)
	-mkdir out
	clang $(OPTIM) $(DEBUG) -c -std=c++1y -fPIC $(CPP) -I../include -Iinclude -I../base/include
	mv *.o out
	ar rcs out/$@ out/*.o

logcat-avr: liblogcat-avr.a
	avr-gcc $(OPTIM) $(DEBUG) -std=c++1y logcat_main.cpp -o out/$@ -I../include/port -Iinclude -Lout -llogcat-avr -L../liblog/out/avr -llog-avr -mmcu=$(DEVICE)

liblogcat-avr.a: $(CPP)
	-mkdir out
	avr-gcc $(OPTIM) $(DEBUG) -c -include../include/port/port.h -include stdlib.h -std=c++1y $(CPP) -I/usr/lib/avr/include -I../include/port -I../include -Iinclude -I../base/include -mmcu=$(DEVICE)
	mv *.o out
	ar rcs out/$@ out/*.o

clean:
	rm -rf out
