#include <stdio.h>
#include <stdlib.h>
#include "history.h"


List *init_history()
{
  List *historyList = malloc(sizeof(HistoryList));
  historyList ->root = NULL;

  return historyList;
}

void add_history(List *list,char *str)
{
  Item *current = list->root;
  Item *newNode = (Item*) malloc(sizeof(Item));
  newNode->next = NULL;

  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = add;
  temp->next->id = temp->id + 1;
}

char *get_history(List *historyList, int id)
{
  Item *current = historyList->root;

  while (current != 0)
    {
      if (current->id == id)
	{
	  return current->str;
	}
      return "Not found";
    }
}



void print_history(List *historyList)
{
  Item *current = historyList->root;

  while (current != NULL)
    {
      printf("%s\n", current->str);
      current = current->next;
    }
}


void free_hisotry(List *historyList)
{
  Item *current;

  while (historyList->root != NULL)
    {
      current = historyList->root;
      historyList->root = historyList->root->next;
      free(current->str);
      free(current);
    }
  free(historyList);
}
