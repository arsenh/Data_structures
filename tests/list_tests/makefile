SOURCES := $(wildcard ./*.cpp)
OBJECTS := $(patsubst ./%.cpp, ./%.o, $(SOURCES))
DEPENDS := $(patsubst ./%.cpp, ./%.dep, $(SOURCES))
DEPENDS += ./list.dep ./node.dep
LIBS := ./list.o
INCLUDES := -I./../../src

./test : $(OBJECTS) $(LIBS)
	g++ -std=c++11 $^ -o $@
	@./test >> ./../../test_results.txt
	   
./%.o : ./%.cpp 
	g++ -std=c++11 -c $< $(INCLUDES) -o $@

./%.o : ../../src/%.cpp
	g++ -std=c++11 -c $< $(INCLUDES) -o $@

./%.dep : ./%.cpp
	@g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

./%.dep : ../../src/%.cpp
	 @g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

-include $(DEPENDS)

.PHONY : clean
clean :
	@echo "cleaning up"
	@rm -rf  *.o *.dep test
