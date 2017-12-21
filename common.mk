#PROJECTVAR
PROJECTNAME = game
LIBNAME = draw
#name
LIB = lib$(LIBNAME).a
#PATH
LIBPATH = ../lib
SOURCEPATH = ../lib/source
INCLUDEPATH = ../lib/include
#flags
GLFLAGS = -lGL -lGLEW -lglut -lGLU
CFLAGS = -Wall -ggdb -I $(INCLUDEPATH)
LFLAGS = -L$(LIBPATH) -l$(LIBNAME)
ARFLAGS = cr
#COMPILER
CC = g++
AR = ar
PUTS = @echo $@' was created'
