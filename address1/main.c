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

   struct address *top;

   top = info;

   while(top) {
      printf("Name: %s\n", top->name);
      printf("Zip: %s\n", top->zip);
      top = top->next;
   }

   FILE *fp;
   top = info;
   if((fp = fopen("mlist.b","wb")) == NULL){
        fprintf(stderr,"cannot open file!!\n");
        exit(1);

   }
   while(top){
       printf("Name: %s is saved into the file...\n",top->name);
       fwrite(top,sizeof(struct address),1,fp);
       top = top->next;
   }

   fclose(fp);






   struct address *temp = NULL;
   top = info;
   while(top){
        temp = top->next;
        free(top);
        top = temp;
   }
   printf("\nLoading...\n");

   info = (struct address *)malloc(sizeof(struct address));
   if(!info){
    fprintf(stderr,"Out of memory\n");
    exit(1);
    }

    fp = fopen("mlist.txt","rb");
    while(!feof(fp)){

        if(1 != fread(info, sizeof(struct address),1,fp))
            break;
        printf("Name: %s\n", info->name);
        printf("Zip: %s\n", info->zip);
        //break;
       info->next = (struct address *)malloc(sizeof(struct address));
       if(!info->next){
        fprintf(stderr,"Out of memory\n");
        exit(1);

    }
    temp = info;
    info = info->next;
    }
    temp->next = NULL;
    if(info->next)
        free(info->next);


    fclose(fp);

}
