#include <stdio.h>
void vfchangeNextV(char array[12][4]);

int main()
{
    char array[12][4]=
    {
        "ABIU",
        "JEMA",
        "SUFI",
        "SOFO",
        "CARI",
        "RARO",
        "AOIU",
        "EUIA",
        "MOMO",
        "MUMA",
        "IOLB",
        "RIFT"
    };
     vfchangeNextV(array);

    return 0;
}
void vfchangeNextV(char array[12][4])
{

    char *p;
    char vowelsArray[5]={'A','E','I','O','U'};
    for(int i=0;i<12;i++)
    {
        p=array[i];

            for(int c=0;c<4;c++,p++)
            {
                for(int v=0;v<5;v++)
                {
                    if(*p-vowelsArray[v]==0)
                    {
                        if(v==4){
                            *p=vowelsArray[0];
                            break;
                        }
                        *p=vowelsArray[v+1];
                        break;

                    }
                }


            }
    }
        for(int pc=0;pc<12;pc++){
        printf("\n");
        for(int pf=0;pf<4;pf++){
            printf("%c",array[pc][pf]);
        }
    }

}
