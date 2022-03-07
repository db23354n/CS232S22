/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>

#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

void swap(char **x, char **y);
void bubbleSort(char *strs[], int size);
int myStrCmp(char * one, char * two);

int main()
{
  char * Strings[NUM];
  char *str;

  for (int i = 0; i < NUM; i++)
    {
      Strings[i] = (char *)malloc(LEN * sizeof(char));
      fgets (Strings[i], LEN, stdin);
      str = Strings[i];
      long length = strlen(str) + 1;
      Strings[i] = (char *)realloc(Strings[i], length * sizeof(char));
    }

  /*
  puts("\nHere are the strings in the order you entered:");
  
  //prints strings out
  for (int i = 0; i < NUM; i++)
    {
      printf("%s", Strings[i]);
    }
  
  puts("\nIn alphabetical order, the strings are:"); 
  */

bubbleSort(Strings, NUM);
  for (int i = 0; i < NUM; i++)
    {
      printf("%s", Strings[i]);
    }
  for(int i = 0; i < NUM; i++)
    free(Strings[i]);
}

void swap(char **x, char **y){
    char * temp = *x;
    *x = *y;
    *y = temp;
}

int myStrCmp(char * one, char * two){
  long len1, len2, shorter;

  len1 = strlen(one);
  len2 = strlen(two);

  if(len1 >= len2) 
    shorter = len2;
  else 
    shorter = len1;
  
  for (int i = 0; i < shorter; i++){
    if (one[i] > two[i]){

      return 1;
    }
    else if(one[i] < two[i]){
      return -1;
    }
  }
  return 1;
}

void bubbleSort(char * strs[], int size) {
   for (int i = 0; i < size-1; i++){
       for (int j = 0; j < size-i-1; j++) {
          if (myStrCmp(strs[j], strs[j+1]) == 1){
             swap(&strs[j], &strs[j+1]);
           }
       }   
  }
}