include ../common.mk

#OBJ
OBJ = $(wildcard $(SOURCEPATH)/*.cpp)
INC = $(wildcard $(INCLUDEPATH)/*.h)

OBJDEP = $(OBJ:.cpp=.o)

all: $(LIB)

.PHONY:all

$(LIB): $(OBJDEP)
	@$(AR) cr $(LIB) $^
	$(PUTS)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ $(GLFLAGS)
	$(PUTS)

clean:
	rm  *.a $(SOURCEPATH)/*.o
