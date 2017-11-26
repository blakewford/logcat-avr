#CPP=logcat.cpp
CPP=logcat2.cpp

DEVICE=atmega2560

DEBUG=-gdwarf-4
OPTIM=
CC=gcc

logcat: liblogcat.a
	$(CC) $(OPTIM) $(DEBUG) -std=c++1y logcat_main.cpp -o out/$@ -Iinclude -Lout -llogcat -lpcrecpp -L../liblog/out/android -llog -lrt -lm -fno-inline
	objcopy -g -Ielf64-x86-64 -Oelf64-x86-64 out/logcat out/logcat-stripped

liblogcat.a: $(CPP)
	-mkdir out
	$(CC) $(OPTIM) $(DEBUG) -c -std=c++1y -fPIC $(CPP) -I../include -Iinclude -I../base/include -fno-inline
	mv *.o out
	ar rcs out/$@ out/*.o

avr: liblogcat-avr.a
	avr-gcc $(OPTIM) $(DEBUG) -std=c++1y logcat_main.cpp -o out/logcat-avr -I../include/port -Iinclude -Lout -llogcat-avr -L../liblog/out/avr -llog-avr -mmcu=$(DEVICE) -Wl,-u,vfprintf -lprintf_flt -lm
	avr-objcopy -g -Ielf32-avr -Oelf32-avr out/logcat-avr out/logcat-avr-stripped

liblogcat-avr.a: $(CPP)
	-mkdir out
	avr-gcc $(OPTIM) $(DEBUG) -c -include../include/port/port.h -include stdlib.h -std=c++1y $(CPP) -I/usr/lib/avr/include -I../include/port -I../include -Iinclude -I../base/include -mmcu=$(DEVICE)
	mv *.o out
	ar rcs out/$@ out/*.o

android:
	~/Android/Sdk/ndk-bundle/ndk-build

clean:
	rm -rf out
	~/Android/Sdk/ndk-bundle/ndk-build clean
