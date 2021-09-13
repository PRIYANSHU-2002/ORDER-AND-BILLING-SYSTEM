#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,p,q;
clrscr();
printf("\t\t\t ORDERING AND BILLING SYSTEM \n\n");
printf("List of eatables available :-\n\n");
printf("1=Burger\n2=Cold-drink\n3=Pizza\n4=Ice-cream \n\n");
printf("( Press the number indicated before a particular item to order it.)\n\n");
printf("What do you wanna order ?\n");
scanf("%d",&a);
switch(a)                                  // Outer switch() statement
{
case 1:
printf("Which burger do you want ? \n");
printf(" 1=Veg Burger (Rs.50) \n 2=Non-veg Burger (Rs.70) \n 3=Cheese Burger (Rs.80)\n");
scanf("%d",&b);
 switch(b)                                    // Nested switch() statement
 {
 case 1:
 printf("How many veg burgers do you want ? \n");
 scanf("%d",&q);
 p=q*50;
 printf("Your order total is Rs.%d",p);
 break;                                  // break statement of inner switch()

 case 2:
 printf("How many non-veg burgers do you want ? \n");
 scanf("%d",&q);
 p=q*70;
 printf("Your order total is Rs.%d",p);
 break;

 case 3:
 printf("How many cheese burgers do you want ? \n");
 scanf("%d",&q);
 p=q*80;
 printf("Your order total is Rs.%d",p);
 break;

 default:                             // Default statement of outer switch()
 printf("Please enter a valid number.");
 }                                   // Closing of inner switch() statement
break;                              // break statement of outer switch()


case 2:
printf("Which cold-drink do you wanna order ? \n");
printf(" 1=Cola (Rs.18) \n 2=Orange Drink (Rs.15) \n 3=Mango Drink (Rs.20) \n");
scanf("%d",&c);
 switch(c)
 {
 case 1:
 printf("How many colas do you want ? \n");
 scanf("%d",&q);
 p=q*18;
 printf("Your order total is Rs.%d",p);
 break;

 case 2:
 printf("How many orange drinks do you want ? \n");
 scanf("%d",&q);
 p=q*15;
 printf("Your order total is Rs.%d",p);
 break;

 case 3:
 printf("How many mango drinks do you want ? \n");
 scanf("%d",&q);
 p=q*20;
 printf("Your order total is Rs.%d",p);
 break;

 default:
 printf("Please enter a valid number.");
 }
break;

case 3:
printf("Which pizza do you want ? \n");
printf(" 1=Veg Pizza (Rs.125) \n 2=Non-Veg Pizza (Rs.150) \n");
scanf("%d",&d);
 switch(d)
 {
 case 1:
 printf("How many veg pizzas do you want ? \n");
 scanf("%d",&q);
 p=q*125;
 printf("Your order total is Rs.%d",p);
 break;

 case 2:
 printf("How many non-veg pizzas do you want ? \n");
 scanf("%d",&q);
 p=q*150;
 printf("Your order total is Rs.%d",p);
 break;

 default:
 printf("Please enter a valid number.");
 }
break;

case 4:
printf("Which flavour of ice-cream do you want to order for ?\n");
printf(" 1=Chocolate (Rs.40) \n 2=Vannila (Rs.25) \n 3=Mango (Rs.35) \n 4=Strawberry (Rs.30) \n");
scanf("%d",&e);
 switch(e)
 {
 case 1:
 printf("How many chocolate ice-creams do you want ? \n");
 scanf("%d",&q);
 p=q*40;
 printf("Your order total is Rs.%d",p);
 break;

 case 2:
 printf("How many vannila ice-creams do you want ? \n");
 scanf("%d",&q);
 p=q*25;
 printf("Your order total is Rs.%d",p);
 break;

 case 3:
 printf("How many mango ice-creams do you want ? \n");
 scanf("%d",&q);
 p=q*35;
 printf("Your order total is Rs.%d",p);
 break;

 case 4:
 printf("How many strawberry ice-creams do you want ? \n");
 scanf("%d",&q);
 p=q*30;
 printf("Your order total is Rs.%d",p);
 break;

 default:
 printf("Please enter a valid number.");
 }
break;

default:                               // Default statement of outer switch()
printf("Please enter a valid number.");
}                                      // Closing of outer switch() statement
getch();
}