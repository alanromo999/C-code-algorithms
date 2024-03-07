#include <stdio.h>
#include <string.h>
struct Car
{
    char Brand[20], color[20];
    char Plates[10];
    int HP;
};

typedef struct Car Automobile;//this is just to rename the structur

void Print(const Automobile *car_Pointer);
void Delete(Automobile *c, const char *p);
void Modify(Automobile *c, const char *p);
void Register(Automobile *c, Automobile New);
int main()
{
   Automobile Car_lot[100]={ {"accord","Grey","JPG3524",200},
                       {"ibiza","White","GPO5325",150},
                       {"Jetta", "Red","abc1234",170}
                      };


   Print(Car_lot);
   Delete(Car_lot,"GPO5325");
   Print(Car_lot);
   Modify(Car_lot,"JPG3524");

    return 0;
}

void Delete(Automobile *c, const char *p)
{
   int i=0;
   for( ; i<100; i++,c++)
   {
       if(strcmp(c->Plates,p)==0)  // strcmp(c[i].Plates,p)==0
          c->HP=0;                 // (*c).HP=0;

   }


}//fin de void

void Print(const Automobile *car_Pointer)
{
   int i=0;
   for( ; i<100; i++,car_Pointer++)
   {
       if(car_Pointer->HP)
          printf("%s %s %s %i\n",car_Pointer->Brand,car_Pointer->color,car_Pointer->Plates,car_Pointer->HP);
   }


}//fin de void
void Modify(Automobile *c, const char *p){
	char Automobile[10];
	printf("Enter the new name?\n");
	gets(Automobile);
	if(strcmp(c->Plates,p)==0){
		strcpy(c->Brand,Automobile);
	}
	Print(c);
}//fin de Modify
void Register(Automobile *c, Automobile New){
	int i,cont;
	char NewName[10];
	char p;
	printf("Enter the new lote?\n");
	gets(NewName);
	strcpy(New[i].Brand,NewName);
	i++;



}//fin del void
