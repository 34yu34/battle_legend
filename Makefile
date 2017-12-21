all: exec/*.cpp lib/include/*.h lib/source/*.cpp
	@cd lib && echo "-----IN LIB-----" && make --no-print-directory
	@cd exec && echo "-----IN EXEC----" && make --no-print-directory

clean:
	@cd lib  && echo "-----IN LIB-----" && make clean --no-print-directory
	@cd exec && echo "-----IN EXEC----" && make clean --no-print-directory

dep:
	sudo apt-get install \
	build-essential \
	libgl1-mesa-dev \
	libglew-dev \
	libsdl2-dev \
	freeglut3-dev \
	libsdl2-image-dev \
	libglm-dev \
	libfreetype6-dev

rm:
	sudo apt-get remove \
	build-essential \
	libgl1-mesa-dev \
	libglew-dev \
	freeglut3-dev \
	libsdl2-dev \
	libsdl2-image-dev \
	libglm-dev \
	libfreetype6-dev
