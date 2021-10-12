#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List* init_history()
{
  List *history;
  history = (List*)  malloc(sizeof(List));
  history ->root = NULL;
  return history;
}

void add_history(List* list,char* str)
{
  Item *new = (Item*) malloc(sizeof(Item));
  
  if (list->root == NULL){
    new->id = 1;
    list->root = new;
  }
  else {
    Item *currItem = list->root;
    while(currItem->next != NULL)
      {
	currItem = currItem->next;
      }
    new->id = currItem->id + 1;
    currItem->next = new;
  }
  new->str = str;
  new->next = NULL;
}

char *get_history(List *history, int id)
{
  Item *current = history->root;

  while (current != 0)
    {
      if (current->id == id)
	{
	  return current->str;
	}
      return "Not found";
    }
}



void print_history(List *history)
{
  Item* current = history->root;

  while (current != NULL)
    {
      printf("History item [%d]: %s \n", current->id, current->str);
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
