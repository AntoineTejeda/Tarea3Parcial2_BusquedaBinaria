#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int posi=0,posi1=0,num,Array[N]={4,20,38,45,67,88,110,137,149,182};

    printf("Ingrese el numero del que quiere obtener la posicion en el arreglo: ");
    scanf("%d",&num);
    if(num<Array[N/2])
    {
        for(int i=0;i<N-1/2;i++)
        {
            if(Array[i]==num)
            {
                posi=i+1;
            }
        }
         printf("La posicion del numero en el arreglo es: %d",posi);
    }else
    {
        for(int j=N/2;j<N;j++)
        {
            if(Array[j]==num)
            {
                posi1=j+1;
            }
        }
         printf("La posicion del numero en el arreglo es: %d",posi1);
    }


}
