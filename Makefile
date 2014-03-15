CXXFLAGS := -W -Wall

all: test

test: build
	test/func_test.sh
	@echo OK

build: lib/mlg.o lib/regexp.o
	$(CXX) -o bin/mlg $^
