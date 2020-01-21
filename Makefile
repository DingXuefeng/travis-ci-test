main: main.cc
	$(CXX) $< -o $@

test:
	./main
