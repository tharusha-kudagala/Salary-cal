#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];

    float sal,new_sal,inc1,inc2,inc3;

    printf("Enter your name:\n");
    scanf("%s",&name);

    printf("Enter your basic salary:\n");
    scanf("%f",&sal);

    inc1 = sal*0.05;
    inc2 = sal*0.1;
    inc3 = sal*0.2;

    if (sal<5000)
        new_sal=sal+inc1;
    else if (sal>=5000 && sal<10000)
        new_sal=sal+inc2;
    else
        new_sal=sal+inc3;

    printf("Employee name : %s\n\n",name);
    printf("New salary is : %.2f LKR\n\n",new_sal);
    return 0;
}
