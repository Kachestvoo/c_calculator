#include <stdio.h>
#include <math.h>

int interface()
{
    printf(" _______________________________________ \n");
    printf("/                                       \\\n");
    printf("|             Console calc              |\n");
    printf("|       enter the number of area        |\n");
    printf("|_______________________________________|\n");
    printf("|   |      /       \\/       \\/         \\|\n");
    printf("| 1 | math |  + -  ||  * /  ||  %%  n^  ||\n");
    printf("|___|______\\______ /\\_______/\\_________/|\n");
    printf("|   |      /                           \\|\n");
    printf("| 2 |  x ? |  y = a * x*x + b * x + c   |\n");
    printf("|___|______\\___________________________/|\n");
    printf("|   |      /          \\/       \\/      \\|\n");
    printf("| 3 | trig | sin/cosx ||  tgx  || ctgx ||\n");
    printf("|___|______\\__________/\\_______/\\______/|\n");
    printf("|   |                                   |\n");
    printf("| 4 |             Matrix                |\n");
    printf("|___|___________________________________|\n");
    printf("|   |      /          \\/      \\/       \\|\n");
    printf("| 5 | geom | triangle || ball || circl ||\n");
    printf("|___|______\\__________/\\______/\\_______/|\n");
    printf("|                                       |\n");
    printf("|       entering number from 1 to 5     |\n");
    printf("|        will open description or    	|\n");
    printf("|           enter 0 for go out   	|\n");
    printf("\\_______________________________________/\n");
}

int math()
{
    printf(" ______________________________________\n");
    printf("/                                      \\\n");
    printf("|           Math operations            |\n");
    printf("|______________________________________|\n");
    printf("|   |   /                             \\|\n");
    printf("| 0 | < |     press 0 for go back     ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|   |   /                             \\|\n");
    printf("| 1 | + |       adding x + y          ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|   |   /                             \\|\n");
    printf("| 2 | - |      subtracting x - y      ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|   |   /                             \\|\n");
    printf("| 3 | * |    multiplication x * y     ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|   |   /                             \\|\n");
    printf("| 4 | / |       division x / y        ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|   |   /                             \\|\n");
    printf("| 5 | %% | remainer of division x by y ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|   |   /                             \\|\n");
    printf("| 6 | ^ |    x to the power of y      ||\n");
    printf("|___|___\\_____________________________/|\n");
    printf("|                                      |\n");
    printf("|           enter the number           |\n");
    printf("|         for the next action          |\n");
    printf("\\______________________________________/\n");
}

int trigonometry()
{
    printf(" __________________________________ \n");
    printf("/                                  \\\n");
    printf("|           Trigonometry           |\n");
    printf("|__________________________________|\n");
    printf("|   /                             \\|\n");
    printf("| 0 |     press 0 for go back     ||\n");
    printf("|___\\_____________________________/|\n");
    printf("|   /                             \\|\n");
    printf("|   | convert degrees to radians  ||\n");
    printf("|   |                             ||\n");
    printf("| 1 |___!_______!______!______!___||\n");
    printf("|   |   #       #      #      #   ||\n");
    printf("|   | 1 sin   2 cos   3 tg   4 ct ||\n");
    printf("|___\\_____________________________/|\n");
    printf("|                                  |\n");
    printf("|         enter two number         |\n");
    printf("|        for the next action       |\n");
    printf("|         (for example 12)         |\n");
    printf("\\__________________________________/\n");
}

int geometry()
{
    printf(" ____________________________ \n");
    printf("/                            \\\n");
    printf("|          Geometry          |\n");
    printf("|____________________________|\n");
    printf("|   \\/                      \\|\n");
    printf("| 0 ||  press 0 for go back ||\n");
    printf("|___|\\______________________/|\n");
    printf("|   |/                      \\|\n");
    printf("| 1 ||   area of triangle   ||\n");
    printf("|___|\\______________________/|\n");
    printf("|   |/                      \\|\n");
    printf("| 2 ||    volume of ball    ||\n");
    printf("|___|\\______________________/|\n");
    printf("|   |/                      \\|\n");
    printf("| 3 ||    area of circle    ||\n");
    printf("|___/\\______________________/|\n");
    printf("|                            |\n");
    printf("|      enter the number      |\n");
    printf("|    for the next action     |\n");
    printf("\\____________________________/\n");
}

int matrix()
{
    printf(" ________________________________ \n");
    printf("/                                \\\n");
    printf("|            Matrix              |\n");
    printf("|________________________________|\n");
    printf("|   |                           \\|\n");
    printf("| 0 |    press 0 for go back    ||\n");
    printf("|\\__|___________________________/|\n");
    printf("|/ \\_/                          \\|\n");
    printf("|   |       2 x 2 matrix        ||\n");
    printf("|   |                           ||\n");
    printf("| 1 |____!________!________!____||\n");
    printf("|   |    #        #        #    ||\n");
    printf("|   |  det 1    trn 2    inv 3  ||\n");
    printf("|\\_/ \\__________________________/|\n");
    printf("|/ \\_/                          \\|\n");
    printf("|   |       3 x 3 matrix        ||\n");
    printf("|   |                           ||\n");
    printf("| 2 |____!________!________!____||\n");
    printf("|   |    #        #        #    ||\n");
    printf("|   |  det 1    trn 2    inv 3  ||\n");
    printf("|\\_/_\\__________________________/|\n");
    printf("|/                              \\|\n");
    printf("|       det - determinante       |\n");
    printf("|       trn - transponation      |\n");
    printf("|       inv - invers             |\n");
    printf("|\\______________________________/|\n");
    printf("|                                |\n");
    printf("|         enter two number       |\n");
    printf("|        for the next action     |\n");
    printf("|         (for example 12)       |\n");
    printf("\\________________________________/\n");
}


int main()
{
    int i = -1;
    double x = 0, y = 0;
    interface();
    printf("\n");

    printf("enter from 1 to 5 ");
    while (i != 0)
    {
        scanf("%d", &i);
        if (i == 1)
        {
            math();
            printf("\nenter from 0 to 6 ");
            while (i != 0)
            {
                scanf("%d", &i);
                printf("\n");
                if (i == 1)
                { // x + y
                    printf("input x ");
                    scanf("%lf", &x);
                    printf("input y ");
                    scanf("%lf", &y);
                    printf("result %.2lf\n", x + y);
                    printf("enter 0 for go back or input new operatation ");

                    continue;
                }
                else if (i == 2)
                { // x - y
                    printf("input x ");
                    scanf("%lf", &x);
                    printf("input y ");
                    scanf("%lf", &y);
                    printf("result %.2f\n", x - y);
                    printf("enter 0 for go back or input new operatation ");

                    continue;
                }
                else if (i == 3)
                { // x * y
                    printf("input x ");
                    scanf("%lf", &x);
                    printf("input y ");
                    scanf("%lf", &y);
                    printf("result %.2f\n", x * y);
                    printf("enter 0 for go back or input new operatation ");

                    continue;
                }
                else if (i == 4)
                { // x / y
                    printf("input x ");
                    scanf("%lf", &x);
                    printf("input y ");
                    scanf("%lf", &y);
                    if (y == 0)
                    {
                        printf("error\n");
                        printf("enter 0 for go back or input new operatation ");
                        continue;
                    }
                    else
                    {
                        printf("result %.2f\n", x / y);
                        printf("enter 0 for go back or input new operatation ");
                        continue;
                    }                    
                }
                else if (i == 5)
                {
                    printf("input x ");
                    scanf("%lf", &x);
                    printf("input y ");
                    scanf("%lf", &y);
                    if (y == 0 || (y - (int)y != 0) || (x - (int)x != 0))
                    {
                        printf("error\n");
                        printf("enter 0 for go back or input new operatation ");
                        continue;
                    }
                    else
                    {
                        printf("result %d\n", (int)x % (int)y);
                        printf("enter 0 for go back or input new operatation ");
                        continue;
                    }
                }
                else if (i == 6)
                {
                    printf("input x ");
                    scanf("%lf", &x);
                    printf("input y ");
                    scanf("%lf", &y);
                    if (x == 0 && y <= 0)
                    {
                        printf("error\n");
                        printf("enter 0 for go back or input new operatation ");
                        continue;
                    }
                    else
                    {
                        printf("result %.2f\n", pow(x, y));
                        printf("enter 0 for go back or input new operatation ");

                        continue;
                    }
                }
                

            }
            i = -1;
            interface();
            printf("\n");

            printf("enter from 1 to 5 ");
        }
        else if (i == 2)
        {
            double a = 0, b = 0, c = 0;
            printf("x ? \n");
            printf("a ");
            scanf("%lf", &a);
            printf("b ");
            scanf("%lf", &b);
            printf("c ");
            scanf("%lf", &c);
            if ((b * b - 4 * a * c) < 0){
                printf("no x \n");
                printf("enter 0 for go back or 1 - 5 description ");
            }
            else if ((b * b - 4 * a * c) == 0)
            {
                printf("result %.2lf\n", ((-b) / 2 * a));
                printf("enter 0 for go back or 1 - 5 description ");
            }
            else
            {
                printf("result1 %.2lf\n", ((-b + pow(b * b - 4 * a * c, 1 / 2)) / 2 * a));
                printf("result2 %.2lf\n", ((-b - pow(b * b - 4 * a * c, 1 / 2)) / 2 * a));
                printf("enter 0 for go back or 1 - 5 description ");
            }

            continue;

            i = -1;
            interface();
            printf("\n");
            printf("enter from 1 to 5 ");
        }    
    }
}