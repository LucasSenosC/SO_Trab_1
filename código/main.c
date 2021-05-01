#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 15

int main() {
   /*char string[100];
   fgets(string, 200, stdin);
   string[strlen(string)-1];
   printf("%s", string);*/

   int PRI[tam];
   int TP[tam];
   int TE[tam];
   int TEIOA[tam];
   int TEIOB[tam];
   int TEIOC[tam];

   int j;
   for (j = 0; j < tam; j++){
      PRI[j] = 0;
      TP[j] = 0;
      TE[j] = 0;
      TEIOA[j] = 0;
      TEIOB[j] = 0;
      TEIOC[j] = 0;
   }

   FILE *fPointer;
   fPointer = fopen("test.txt", "r");
   char singleLine[150];
   char *sub;
   char *sub2;
   int count;
   char stringTest[10];
   while(!feof(fPointer)){
      fgets(singleLine, 150, fPointer);
      puts(singleLine);
      sub = strtok (singleLine,";");
      count = 0;
      int k;
      while(sub != NULL){
         printf ("%s\n",sub);
         sub = strtok (NULL,";");
         count = count + 1;
         if(count >= 4){
            strcpy(stringTest, sub);
            printf ("alooooooooooo1: %s\n",stringTest);
            stringTest[strlen(stringTest)-1] = '\0';
            for(k=0;k<strlen(stringTest);k++){
               stringTest[k]=stringTest[k+1];
            }
            printf ("alooooooooooo2: %s\n",stringTest);
            sub2 = strtok (stringTest,",");
            while (sub2 != NULL){
               puts("segundo while");
               printf ("%s\n",sub2);
               sub2 = strtok (NULL,",");
            }
            printf ("sub: %s\n",sub);
         }
      }
      //printf ("count: %d\n",count);
   }
   

   









   return 0;
}