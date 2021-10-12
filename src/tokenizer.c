#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"

int space_char(char c)
{
  if (c == '\t' || c == ' ')
    {
      return 1;
    }
  return 0;
}

int non_space_char(char c)
{
  if (c != '\t' || c != ' ' || c != '\0')
    {
      return 1;
    }
  return 0;
}

char *word_start(char *str)
{
  while (space_char(*str))
    {
      str++;
    }
  return str;
}

char *word_terminator(char *str)
{
  while (!space_char(*str))
    {
      str++;
      if (*str == '\0')
	{
	  return str;
	}
    }
      return str;
}
int count_words(char *str)
{
  //int i = 0;
  int count = 0;
  while(*str != '\0')
    {
      str = word_start(str);
      str = word_terminator(str);
      count += 1;
    }
  return count;
}

char *copy_str(char *intStr, short len)
{
  char *copy = malloc((len+1)*sizeof(char));

  int i = 0;

  for (i = 0; i < len; i++)
    {
      copy[i] = intStr[i];
    }

  copy[i] = '\0';
  return copy;
}

char **tokenize(char *str)
 {
   int numWords = count_words(str);
   char **tokens = (char**)malloc((numWords+1)*sizeof(char*));
   char *start;
   char *end;
   int i;
   //start = word_start(str);
   
   for (i = 0; i < numWords; i++)
     {
       str = word_start(str);
       end = word_terminator(str);
       tokens[i] = copy_str(str, (end - str));
       str = end;
     }
   tokens[i] = '\0';
   
   return tokens;
 }


void print_tokens(char **tokens)
 {
   int i;
   for (i = 0; tokens[i] != NULL; i++)
     {
       printf("\nTokens[%d] : %s\n",i,tokens[i]);               ;
     }
 }


void free_tokens(char **tokens)
 {
   int i;
   for (i = 0; tokens[i] != NULL; i++)
     {
       free(tokens[i]);
     }
   free(tokens);
 }

