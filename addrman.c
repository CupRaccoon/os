#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global Variable
struct address {
   char name[40];
   char zip[40]; 
   struct address *next;     // pointer to a next element 
} list_entry;

struct address *start;
struct address *last;

int main()
{
// Local Variable
   struct address *info;
   struct address *info2;
   struct address *info3; 

// initialize list point
   start = last = NULL;
   
   info = (struct address*) malloc(sizeof(list_entry));
   strcpy(info->name, "Tom");
   strcpy(info->zip, "613");
   info2 = (struct address*) malloc(sizeof(list_entry));

   // Connect the next element
   info->next = info2;
   strcpy(info2->name, "John");
   strcpy(info2->zip, "615");
   info2->next = NULL;

   // Connect the next element
   info3 = (struct address*) malloc(sizeof(list_entry));
   info2->next = info3;
   strcpy(info3->name, "Marie");
   strcpy(info3->zip, "316");
   info3->next = NULL;
   

   struct address *top;

   top = info;
   
   //delete 2nd 
/*
   free(info2);
   info->next = info3;
   
*/


   





   while(top) {
      printf("Name: %s\n", top->name);
      printf("Zip: %s\n", top->zip);
      top = top->next;
    }

    top = info;
    printf("Name: %s\n",top->next->next->name);
    while(top){
    free(top);
    top = top->next;
    }
    
}

