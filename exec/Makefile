include ../common.mk

#OBJ
OBJ = $(wildcard *.cpp)
INC = $(wildcard *.h)

dep = $(wildcard $(INCLUDEPATH)/*.h)
dep += $(wildcard $(SOURCEPATH)/*.cpp)
#OBJDEP
OBJDEP = $(OBJ:.cpp=.o)

all:$(PROJECTNAME).exe

$(PROJECTNAME).exe: $(OBJDEP) $(dep)
	@$(CC) $(CFLAGS) -o ../$(PROJECTNAME).exe $(OBJDEP) $(LFLAGS) $(GLFLAGS)
	$(PUTS)

%.o:%.cpp
	@$(CC) $(CFLAGS) -o $@ -c $<
	$(PUTS)

clean:
	rm *.o ../*.exe
