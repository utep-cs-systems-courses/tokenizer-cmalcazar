OBJS = tokenizer.o uimain.o history.o

all: tokenizer

tokenizer.o = tokenizer.h tokenizer.c

history.o = history.h history.c tokenizer.h

uimain.o = history.h tokenizer.h uimain.c

tokenizer: $(OBJS)

clean:
	rm -f *o.tokenizer

run:
	./tokenizer
