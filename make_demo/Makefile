$(warning Demo1)
VAR = "I'm variable"

target: first second first
	@echo "third"
	@echo $(CXX)
	@echo $(CC)
	@echo $^
	@echo $@
	@echo $(VAR)

all:target hello clean

hello:hello.c
	$(CXX) $^ -o $@

udc_print:udc_print.cc
	$(CXX) $^ -o $@

first:
	@echo "first"

second:
	@echo "second"

foo:
	@echo $(VAR)
clean:
	rm -f hello