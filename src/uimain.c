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
  
  // List *history = init_history();
  
  printf("Please type a word to tokenize it. Or press 'q' to exit.");

  while(input[0] != 'q')
    {
      putchar('$');
      fgets(input, MAX, stdin);

      if (input[0] != 'q'){
	printf("You typed: %s", input);
	
	tokens = tokenize(input);
	
	printf("Printing tokens---------");
	
	print_tokens(tokens);
      }
      
      /* printf("Testing functions with: ", input);
      int len = count_words(input);
      printf("Number of words: ", len);
      char* start = word_start(input);
      printf("Word start is: ", start);
      char* end = word_terminator(input);
      printf("Word end is: ", end);

      // char * copy = copy_str(userIn, 
      printf("Now tokenizing string");
      char ** tokens = tokenize(input);
      print_tokens(tokens);
      printf("Now freeing tokens.");
      free_tokens(tokens);
      printf("History of tokenizer:");
      */
      
    }
  return 0;
}
