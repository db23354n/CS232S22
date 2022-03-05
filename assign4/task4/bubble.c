/* Example: bubble sort strings in array */
#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>
#include <stdbool.h>

#define NUM 30
#define LEN 1200


bool compareStr(char a[], char b[]){
  
  int a_len = strlen(a) - 1, b_len = strlen(b) - 1;
  
  if(a_len > b_len){
    for(int i = 0; i < b_len; i++){
      if(a[i] > b[i]){
        
        return true;
        
      } else {
        
        return false;
        
      }
    }
  } else {
    for(int i = 0; i < a_len; i++){
      if(a[i] > b[i]){
        
        return true;
        
      } else {
        
        return false;
        
      }
    }
  }
  return false;
}

int main()
{
  char * Strings[NUM];
  char buffer[LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings.
     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length. However, each 
	 string stored in array Strings must not waste space. That is, only the buffer
	 used by fgets() to temporary store the string read from input stream needs to 
	 be LEN bytes long.  
	 Note that the newline and NULL characters will be included in LEN.
  */
  int stringsize = 0;
  for(int i = 0; i < NUM; i++){
    if(fgets(buffer, LEN, stdin) != NULL){
      
      stringsize = strlen(buffer);
      Strings[i] = (char *)malloc(stringsize+1);
      strcpy(Strings[i], buffer);
      
    }
    
  }

  puts("\nHere are the strings in the order you entered:");

  for(int i = 0; i < NUM; i++){
    puts(Strings[i]);
  }
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order
     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) Implement a swap function to swap two strings by swapping pointers
	    without copying any chars.You are not allowed to use any C library 
	    functions in swap.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */
  /* Output sorted list */

  bool sorted = false;
  int ceiling = NUM - 1;
    
  while(!sorted){
    
    sorted = true;
    int i;
    
    for(i = 0; i < NUM - 1; i++){
      if(compareStr(Strings[i], Strings[i+1]) == true){
        
        char * temp = Strings[i];
        Strings[i] = Strings[i+1];
        Strings[i+1] = temp;
        sorted = false;
        
      }
    }
    ceiling--;
  }
  

    
  puts("\nIn alphabetical order, the strings are:");  
  
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for(int i = 0; i < NUM; i++){
    
    puts(Strings[i]);
    
  }

}
