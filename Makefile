CXX := g++
CXXFLAGS := -O0 -g -Wall -std=c++14 -Werror=return-type

# enable asan
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer
LDFLAGS  += -fsanitize=address -fno-omit-frame-pointer

test: IntArray.cpp main.cpp
	$(CXX) $(CXXFLAGS) $^ -o main.out
	./main.out

clean:
	rm -f *.out
