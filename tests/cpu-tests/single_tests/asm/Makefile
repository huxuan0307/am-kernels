.PHONY: clean


ALL = $(basename $(notdir $(shell find . -name "*.S")))

all: $(addsuffix .bin, $(ALL))
	echo "" $(ALL)

%.bin: %.o
	riscv64-linux-gnu-objcopy -O binary -j .text $< $@
	riscv64-linux-gnu-objdump -S $< > $(addsuffix .txt, $(basename $@))

%.o: %.S
	riscv64-linux-gnu-gcc -march=rv64i -mabi=lp64 -c $< -o $@

clean:
	@-rm -rf *.bin *.txt
	