#include <stdio.h>
#include <string.h>
struct Car
{
    char Brand[20], color[20], Plates[10];
    int HP;
};

typedef struct Car Automobile;//this is just to rename the struct

void vfPrint(const Automobile *car_Pointer);
void vfDelete(Automobile *c, const char *p);
void vfModify(Automobile *c, const char *p);

int main()
{
   Automobile Car_lot[100]={ {"accord","Grey","JPG3524",200},
                             {"ibiza","White","GPO5325",150},
                             {"Jetta", "Red","abc1234",170}
                            };


   vfPrint(Car_lot);
   vfDelete(Car_lot,"GPO5325");
   vfPrint(Car_lot);
   vfModify(Car_lot,"JPG3524");
   vfPrint(Car_lot);

    return 0;
}
void vfPrint(const Automobile *car_Pointer)
{
   int i=0;
   for( ; i<100; i++,car_Pointer++)
   {
       if(car_Pointer->HP)
          printf("%s %s %s %i\n",car_Pointer->Brand,car_Pointer->color,car_Pointer->Plates,car_Pointer->HP);
   }


}//end of void

void Delete(Automobile *c, const char *p)
{
   int i=0;
   for( ; i<100; i++,c++)
   {
       if(strcmp(c->Plates,p)==0)  // strcmp(c[i].Plates,p)==0
          c->HP=0;                 // (*c).HP=0;

   }


}//end of void


void vfModify(Automobile *c, const char *p){
	char newData[10];
	printf("Enter the new name?\n");
	gets(automobile);
        if(strcmp(c->Plates,p)==0)
        {
            strcpy(c->Brand,automobile);
        }
	Print(c);
}//end of void


