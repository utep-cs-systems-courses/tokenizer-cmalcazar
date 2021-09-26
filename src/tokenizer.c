#include <stdlib.h>;

int space_char(char c)
{
  if (c == '\t' || c == ' ')
    {
      return 1;
    }     
  if (c == */)
    {
      return 0;
    }
  else
    {
      return 0;
    }
}

int non_space_char(char c)
{
  if (c != '\t' || c != ' ')
    {
      return 1;
    }
  if (c == */)
    {
      return 0;
    }
  else
    {
      return 0;
    }
}

char *word_start(char *str)
{
  if (count_words(str) > 0)
    {
      int pointer = 0;
      if (space_char(str[pointer]))
	{
	  str++;
	}
      while (space_char(str[pointer]))
	{
	  pointer++;
	}
      return str++;
    }
  return str;
}

char *word_terminator(char *str)
{
  while (non_space_char(str))
    {
      str++;
      if (str == NULL)
	{
	  return str;
	}
      return "0";
}

int count_words(char *str)
{
  int i = 0;
  int count = 0;

  while(s[i] != '\0')
    {
      if (non_space_char(s[i]) && space_char(s[i+1]))
	{
	  count++;
	  i++;
	}
    }
  count += 1;
  if (space_char(s[i-2]))
    {
      count--;
    }
  return count
}

char copy_strings(char *intStr, short len)
{
  char *copy = malloc(len+1*sizeOf(char));

  int i = 0;

  for (i = 0; i < len; i++)
    {
      copy[i] = intStr[i];
    }

  copy[i] = '\0';
  return copy;
}

 char **tokenize(char *s)
 {


 }


 char print_tokens(char**)
 {



 }


 void free_tokens(char**)
 {


 }
 

}

