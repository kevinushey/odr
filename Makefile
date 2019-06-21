all:
	$(CXX) -shared -fPIC $(CXXFLAGS) $(LTO) pitch.cpp -o libpitch.so
	$(CXX) -g $(CXXFLAGS) $(LTO) main.cpp -L. -lpitch
	./a.out

