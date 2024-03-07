#include <stdio.h>
#include <string.h>
int vfstrcmp(char phrase1[50], char phrase2[50]);

int main()
{
    printf("This is a longest way of the strcmp\n");
    vfstrcmp("Hello World", "Hello World")==0?printf("match\n"):printf("No match\n");
    return 0;

}
int vfstrcmp(char phrase1[50], char phrase2[50])
{
    char *p1=NULL, *p2=NULL;
    p1=phrase1;
    p2=phrase2;


    for(;*p1||*p2;p1++,p2++){
        if(*p1!=*p2)
        return 1;
    }
    return 0;
}
