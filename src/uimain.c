#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

#define MAX 400


/*simple ui that prints what user inputs*/
int main()
{

  char input[MAX];
  char** tokens;
  // List* list = init_history();
  
  List *history = init_history();
  
  printf("Please type a word to tokenize it. Press 'h' to print history. Press '!' to get specific entry in history. Or press 'q' to exit.");

  while (input[0] != 'q'){
      putchar('$');
      fgets(input, MAX, stdin);
      
      printf("You typed: %s", input);
	
      tokens = tokenize(input);
	
      printf("Printing tokens---------");
	
      print_tokens(tokens);

      add_history(history, input);

      if (input[0] == 'h'){
	print_history(history);
	}

      if (input[0] == '!'){
	int id = atoi(input+1);
	//char *h = get_history(history,atoi(input+1));
	//char **tokens = tokenize(h);
	//printf("History: %s\n", h);
	//printf("History tokenized:\n");
	char* item = get_history(history,id);
	printf("History element at %d: %s", id,item);
	//print_tokens(tokens);
	//free_tokens(tokens);
	}
  }
  return 0;
}
