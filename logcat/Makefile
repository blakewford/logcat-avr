CPP=logcat.cpp getopt_long.cpp logcat_system.cpp

logcat: liblogcat.a
	clang++ -gdwarf-4 -std=c++1y logcat_main.cpp -o out/$@ -Iinclude -Lout -llogcat -lpcrecpp -L../liblog/out/android -llog -lrt

liblogcat.a: $(CPP)
	-mkdir out
	clang -gdwarf-4 -c -std=c++1y -fPIC $(CPP) -I../include -Iinclude -I../base/include
	mv *.o out
	ar rcs out/$@ out/*.o

clean:
	rm -rf out
