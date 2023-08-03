

cpp := src/main.cpp
obj := src/main.o

cpp_1 := src/main1.cpp
# cpp_2 = $(cpp_1)
cpp_2 := $(cpp_1)

# cpp_1 = src/main.cpp
cpp_1 ?= src/main.cpp
cpp_3 ?= src/main.cpp

cpp_2 += $(cpp_3)
cpp_2 += 1234

cpp_2 += uuuuu\
		 hahahah\
		 ooo

# $(obj) : $(cpp)
# src/%.o : src/%.cpp
src/*.o : src/*.cpp
	g++ -c $< -o $@
	@echo $^


# compile : $(obj)

# debug : 
#	@echo $(cpp_2)



.PHONY : compile debug