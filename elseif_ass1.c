/*Write a program for the following output
  using else if ladder.
Ex-1:
MENU CARD
1.COFFEE Rs:15
2.TEA Rs:10
3.COLD COFFEE Rs:25
4.MILK SHAKE Rs:50
Enter Your choice : 2
    You have selected Tea
    Enter the quantity : 5
    Total amount : 50

Ex-2:
MENU CARD
1.COFFEE Rs:15
2.TEA Rs:10
3.COLD COFFEE Rs:25
4.MILK SHAKE Rs:50
Enter Your choice : 3
       You have selected Cold Coffee
       Enter The quantity : 5
       Total amount : 125
*/
#include<stdio.h>
int main(){
int choice,quantity,total;
printf("MENU CARD\n");
printf("1.COFFEE\t RS:15\n2.TEA\t\t RS:10\n3.COLD COFFEE\t RS:25\n4.MILK SHAKE\t RS:50\n");
printf("Enter your choice : ");
scanf("%d",&choice);
if(choice==1){
printf("\nyou have selected Coffee\n");
printf("Enter the quantity : ");
scanf("%d",&quantity);
total=15*quantity;
printf("Total amount : %d",total);
}
else if(choice==2){
printf("\nyou have selected Tea\n");
printf("Enter the quantity : ");
scanf("%d",&quantity);
total=10*quantity;
printf("Total amount : %d",total);
}
else if(choice==3){
printf("\nyou have selected Cold coffee\n");
printf("Enter the quantity : ");
scanf("%d",&quantity);
total=25*quantity;
printf("Total amount : %d",total);
}
else if(choice==4){
printf("\nyou have selected Milk shake\n");
printf("Enter the quantity : ");
scanf("%d",&quantity);
total=50*quantity;
printf("Total amount : %d",total);
}
else
printf("\nEnter valid option Sir!");
}

























