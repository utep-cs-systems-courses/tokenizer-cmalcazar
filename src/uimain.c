#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

/*simple ui that prints what user inputs*/
int main()
{

  char userIn[100];
  List *history = init_history();
  
  printf("Please type a word to tokenize it. Or press 'q' to exit.");

  if (userIn[0] != 'q')
    {
      printf("Testing functions with: ", userIn);
      int len = count_words(userIn);
      printf("Number of words: ", len);
      char* start = word_start(userIn);
      printf("Word start is: ", start);
      char* end = word_terminator(userIn);
      printf("Word end is: ", end);

      // char * copy = copy_str(userIn, 
      printf("Now tokenizing string");
      char ** tokens = tokenize(userIn);
      print_tokens(tokens);
      printf("Now freeing tokens.");
      free_tokens(tokens);
      printf("History of tokenizer:");
    }
  return 0;
}
