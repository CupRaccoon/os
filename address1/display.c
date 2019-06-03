#include <stdio.h>



void display(struct addresss *top){

    top = info;

}


   while(top) {
      printf("Name: %s\n", top->name);
      printf("Zip: %s\n", top->zip);
      top = top->next;
   }
