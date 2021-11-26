#include<stdio.h>
 int num;
void display1(int x[])
{
   int sum = 0;
   double avg;
   for(int i = 0 ; i<num ; i++)
   {
      sum = sum + x[i];
   }
  avg =  sum / num;
  printf("Total sum is :  %d\n",sum);
  printf("Avage is :  %.1lf\n",avg);

}
int display2(int a[])
{
   int max = a[0];
   for(int i = 0 ; i<num ; i++)
   {
       if(max<a[i])
       max = a[i];
   }
   return max;
}

int main()
{


 printf("Enter your array number : ");
 scanf("%d",&num);
 int marks[num];

 for(int i = 0 ; i<num ; i++)
 {
    printf("Marks[%d] :  ",i);
    scanf("%d",&marks[i]);
 }

display1(marks);
int max = display2(marks);
printf("Maximum value is : %d\n",max);

getch();
}
