SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(patsubst src/%.cpp, obj/%.o, $(SOURCES))
TESTS :=  $(sort $(dir $(wildcard ./tests/*/)))
DEPENDS := $(patsubst src/%.cpp, deps/%.dep, $(SOURCES))
INCLUDES := -I./src

bin/program : $(OBJECTS)
	@mkdir -p bin
	g++ -std=c++11 $(OBJECTS) -o $@


obj/%.o : src/%.cpp 
	@mkdir -p ./obj
	g++ -std=c++11 -c $< $(INCLUDES) -o $@

deps/%.dep : src/%.cpp
	@mkdir -p ./deps
	@g++ -MM $< -MT "$@ $(subst %.dep, %.o, $@)" -o $@ $(INCLUDES)

-include $(DEPENDS)

.PHONY : clean docs test
clean :
	@echo "cleaning up"
	@rm -rf  deps obj bin docs/doxygen test_results.txt
	for dir in $(TESTS); do \
		$(MAKE) -C $$dir clean ; \
	done
	
docs : 
	@mkdir -p docs/doxygen
	@doxygen docs/config

test : 
	@touch ./test_results.txt
	for dir in $(TESTS); do \
		$(MAKE) -C $$dir; \
	done
