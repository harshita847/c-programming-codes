// array - collection of elements of similar datatype in single variable

#include <stdio.h>
int main()
{
    // int array[4] = {10, 20, 30, 40};
    // printf("%d", array[2]);

    // to print array using loops

    int array[4] = {10, 20, 30, 40};
     for(int i=0;i<4;i++)
     {
        printf("%d\n",array[i]);}
        

    // reverse of an array

    int array[4] = {10, 20, 30, 40};
    for (int i = 3; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }


//to find sum of elements of array

int array[4] = {10, 20, 30, 40};
int sum=0;
    for (int i = 3; i >= 0; i--)
    {
        sum=sum+array[i];
    }
    printf("%d",sum);


// to find max element in array
int arra[4] = {10, 20, 30, 40};
int max=arra[2];
    for (int i =0; i<3; i++)
    {
        if (arra[i]> max)
           {
            max= arra[i];
           }}
           printf("%d",max);
    


// to find min in array

int array[5] = {-1,0, -20, -30, 40};
int min=array[2];
    for (int i =0; i<5; i++)
    {
        if (array[i]< min)
           {
            min= array[i];
           }}
           printf("%d",min);
    




// to print even no from array

int array[5] = {1,34,20, 30, 40};
  
    for (int i =0; i<5; i++)
    {
        if(array[i]%2==0)
         printf("%d\n",array[i]);

    }
    return 0;
}
    

    



