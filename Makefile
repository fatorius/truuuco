CXXFLAGS = -Wall -std=c++17
EXE := truuuco
COMP = g++-10

SRCS = ./src/main.o \
		./src/interface.o \
		./src/init.o \
		./src/help.o \
		./src/state.o

build: $(SRCS)
	@ $(COMP) $(CXXFLAGS) -o $(EXE) $(SRCS)
	@ echo "================="
	@ echo "truuuco compilado com sucesso"

%.o: %.cpp
	@ echo $@
	@ $(COMP) -c $(CXXFLAGS) $< -o $@

clean:
	@ rm -rf ./src/*.o