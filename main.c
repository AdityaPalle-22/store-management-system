// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{   int x,y,z,l,m,op,rtons,wtons,stons,rice=10,wheat=8,sugar=5,pmsr=25,pmsw=15,pmss=15;
char a[20],un[20];
char p[20]; 
    printf("*******WELCOME TO MADE IN INDIA GODOWN*******\n");
    mainmenu:
    printf(" 1.MANAGER LOGIN\n 2.USER LOGIN\n 3.exit\n");
    scanf("%d",&x);
    if(x==1)
  {  printf("WELCOME TO MANAGER LOGIN PAGE\n");
    printf("enter your name:\n");
    scanf("%s",a);
    printf("enter your password :\n");
    scanf("%s",p);
  
    if(strcmp(a,"aravind")==0&&strcmp(p,"12345")==0)
   
       printf("welcome manager sir\nselect an option below\n");
       main:
       printf("1.rice\n 2.wheat \n 3.sugar\n 4.exit\n");
       scanf("%d",&y);
       if(y==1)
       { rice:
           printf("1.available stock\n 2. uptodate sales\n 3.upcoming stocks\n 4.exit\n");
           scanf("%d",&z);
           if(z==1)
           {
           printf("available stock is %d tons\n",rice-rtons);
           goto rice;
           }
           else if(z==2)
           {
               printf("%d tons\n",pmsr+rtons);
                        goto rice;
           }
           else if(z==3)
           {
               printf("40 tons from andhra pradesh\n");
                        goto rice;
           }
           else
           {
               printf("exit");
               goto main;
       }
       
     }
     else if(y==2)
     {
     wheat:
      printf("1.available stock\n 2.uptodate sales\n 3.upcoming stocks\n 4.exit\n");
           scanf("%d",&l);
           if(l==1)
           {
           printf("available stock is %d tons\n",wheat-wtons);
           goto wheat;
           }
           else if(l==2)
           {
               printf("%d tons\n",pmsw+wtons);
                        goto wheat;
           }
           else if(l==3)
           {
               printf("20 tons from rajasthan\n");
                        goto wheat;
           }
           else
           {
               printf("exit");
               goto main;
       }
    
}
else if(y==3)
{
sugar:
      printf("1.available stock\n 2.uptodate  sales\n 3.upcoming stocks\n 4.exit\n");
           scanf("%d",&m);
           if(m==1)
           {
           printf("available stock is %d tons\n",sugar-stons);
           goto sugar;
           }
           else if(m==2)
           {
               printf("%d tons\n",pmss+stons);
                        goto sugar;
           }
           else if(m==3)
           {
               printf("10 tons from telanagana\n");
                        goto sugar;
           }
           else
           {
               printf("exit");
               goto main;
       }
    
}
else 
{
    printf("logout sucess!");
    goto mainmenu;
}}
else if(x==2)
{
    printf("welcome user portal\n");
    printf("1.login\n");
      printf("WELCOME TO USER LOGIN PAGE\n");
    printf("enter your name:\n");
    scanf("%s",un);
   order:
   {   
       printf("welcome %s \nselect an option below\n what do you want to purchase\n1.rice\n 2.wheat\n 3.sugar\n 4.exit\n",un);
       scanf("%d",&op);
       if(op==1)
       {
           printf("available stock 10 tons \nper bag(100kg) costs 5000rs\n ");
           printf("enter the no of tons you want\n");
           scanf("%d",&rtons);
           printf(" %s your bill is %d\n",un,5000*rtons);
           goto order;
           
       }
       else if(op==2)
       {
        printf("available stock 8 tons \nper bag(100kg) costs 7000rs \n");
           printf("enter the no of tons you want\n");
           scanf("%d",&wtons);
           printf(" %s your bill is %d\n",un,7000*wtons);
           goto order;
       }
       else if(op==3)
       {
           printf("available stock 5 tons \nper bag(100kg) costs 10000rs \n");
           printf("enter the no of tons you want\n");
           scanf("%d",&stons);
           printf("%s your bill is %d\n",un,10000*stons);
           goto order;
           
       }
       else
       {
           printf("thank you!!");
           goto mainmenu;
           
       }
   }
}
}