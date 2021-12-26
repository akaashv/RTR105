#include <stdio.h>

int main()
{
int arr[3];
int choice;
  
printf("Enter 3 numbers : ");
  
for(int i = 0; i < 3; i++)
{
scanf("%d", &arr[i]);
}
  
printf("Enter 1 for ascending, 2 for descending : ");
scanf("%d", &choice);
  
if(choice == 1)
{
if(arr[0] > arr[1])
{
int temp = arr[1];
arr[1] = arr[0];
arr[0] = temp;
}
  
if(arr[1] > arr[2])
{
int temp = arr[2];
arr[2] = arr[1];
arr[1] = temp;
}
}
  
else if(choice == 2)
{

if(arr[0] < arr[1])
{
int temp = arr[1];
arr[1] = arr[0];
arr[0] = temp;
}
  
if(arr[1] < arr[2])
{
int temp = arr[2];
arr[2] = arr[1];
arr[1] = temp;
}
}
  
for(int i = 0; i < 3; i++)
{
printf("%d\t", arr[i]);
}
  

char ch[3];

printf("\nEnter 3 characters : ");
  
for(int i = 0; i < 3; i++)
{
scanf(" %c", &ch[i]);
}
  
printf("Enter 1 for ascending, 2 for descending : ");
scanf("%d", &choice);
  
if(choice == 1)
{

if(ch[0] > ch[1])
{
char temp = ch[1];
ch[1] = ch[0];
ch[0] = temp;
}
  
if(ch[1] > ch[2])
{
char temp = ch[2];
ch[2] = ch[1];
ch[1] = temp;
}
}
  
else if(choice == 2)
{
if(ch[0] < ch[1])
{
char temp = ch[1];
ch[1] = ch[0];
ch[0] = temp;
}
  
if(ch[1] < ch[2])
{
char temp = ch[2];
ch[2] = ch[1];
ch[1] = temp;
}
}
  
for(int i = 0; i < 3; i++)
{
printf("%c\t", ch[i]);
}
  
  
return 0;
}
