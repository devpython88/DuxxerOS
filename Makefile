SOURCES := src/main.cpp src/log.hpp src/star_maker.hpp src/log.cpp

buildTest:
	g++ -o dist/Duxxer.exe $(SOURCES) -lkernel32 -lwinmm -luser32 -lgdi32

build_library:
	g++ -c src/log.cpp -o obj/duxxer.o
	g++ -shared -o dist/lib/duxxer.dll obj/duxxer.o

buildRelease:
	cd dist
	g++ -o dist/Duxxer.exe $(SOURCES) -Llib
	cd ..
