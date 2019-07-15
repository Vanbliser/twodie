# include <stdio.h>
rand();
main()
{
    //Declaration of used variables
    int d1,d2,sum,num,sum1,sum2;
    //Initialisation of used variable
    d1=0;d2=0;sum=0;num=0;sum1=0;sum2=0;
    printf("\t\t\tvalues of die1-die2 are\n"); 
    
    //at every toss, if their sum isn't 2, continue tossing
    while(sum != 2)
    {
        d1 = 1 +(rand()%6);printf("\t%d-",d1);
        d2 = 1 +(rand()%6);printf("\t%d-",d2);
        sum = d1 + d2; ++num;
        sum1 += d1; sum2 += d2;
    }
   //print the results
    printf("\nsum of die1 is %d",sum1);
    printf("\nsum of die2 is %d",sum2);
    printf("\nnumber of time tossed is %d",num);
    printf("\n\n\n");
}
