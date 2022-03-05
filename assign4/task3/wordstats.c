#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  int letter_frequency[26] = {0};
  int len, i;
  char buf[MAX_BUF];
  char tmp[MAX_BUF];
  
  do{
    strcat(buf, fgets(tmp, MAX_BUF, stdin));
  }
  while(tmp[0]!='\n');
  
  len = strlen(buf);
  i=0;
  
  do {
    if (buf[i]>= 'A' && buf[i] <= 'Z') {
      int j= buf[i]-65;
      letter_frequency[j]++;
    }
    else if (buf[i]>= 'a' && buf[i] <= 'z') {
      
      int j= buf[i]-97;
      letter_frequency[j]++;
      
    }
    
    len--;
    i++;
  } 
  while (len > 1);

  printf("Distribution of letters in corpus:\n");
  
  for (i = 0; i < 26; i++) {
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
  return 0;
}