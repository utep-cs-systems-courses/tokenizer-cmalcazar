OBJS = tokenizer.o uimain.o

all: tokenizer

tokenizer.o = tokenizer.h

history.o = history.h

uimain.o = history.h tokenizer.h

tokenizer: $(OBJS)

clean:
	rm -f *o.tokenizer

run:
	./tokenizer
