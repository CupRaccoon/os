#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct address {
    char name[40];
    char zip[40];
    struct address *next;
    struct address *prior;
} list_entry;

struct address* start;
struct address* last;

void mygets(char str[], int nchars){
    int i = 0;

    while(str[i] = getchar() != '\n'){
        if(i > nchars - 1){

            break;
        }
        i++;

    }
    str[i] = '\n';
}





struct address* store(i, top)
struct address* i;
struct address* top;
{
    start = top;
    //Empty

    if(!last){
        i->next = NULL;
        i->prior = NULL;
        last = i;
        return i;
    }
    else{
        last->next = i;
        i->next = NULL;
        i->prior = last;
        last = i;

        return start;
    }
    return start;
}

struct address* find(char* name)
{

    struct address* info;


    info = start;

    while(info){

        if(!strcmp(name, info->name)){
            return info;
        }
        info = info->next;
    }

    return NULL;
}

void mydelete(void)
{
    struct address* info;
    char name[40];

    printf("Delete...\n");
    printf("Enter the name: ");
    mygets(name, 40);
    info = find(name);
    printf("The element with name %s is being deleted\n",info->name);

    if(info){
        if(start == info){
            start = info->next;
            if(start){
                start->prior = NULL;
            }
            else{
                last = NULL;
            }
        }
        else{}




        free(info);
    }




}

void display()
{
    struct address *top;

    top =  start;
    while(top)
    {
        printf("Name: %s, Zip: %s\n", top->name, top->zip);
        top = top->next;
    }
}

int main(void)
{
    struct address* info;

    info = (struct address *)malloc(sizeof(list_entry));
    // Check return value
    if (!info) {
       printf("Out of memory!!\n");
       return 0;
    }

    strcpy(info->name, "Tom");
    strcpy(info->zip, "613");

    start = store(info, start);

    info = (struct address *)malloc(sizeof(list_entry));
    // Check return value
    if (!info) {
       printf("Out of memory!!\n");
       return 0;
    }

    strcpy(info->name, "John");
    strcpy(info->zip, "713");

    start = store(info, start);

    display();

    mydelete();

    display();

    return 0;
}
