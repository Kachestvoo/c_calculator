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
    printf("| 3 | trig | sin/cosx ||  tgx  ||  arc ||\n");
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
    printf("|   |       degrees -> value      ||\n");
    printf("|   |                             ||\n");
    printf("| 1 |_______!______!_______!______||\n");
    printf("|   |       #      #       #      ||\n");
    printf("|   |     1 sin  2 cos   3 tg     ||\n");
    printf("|___\\_____________________________/|\n");
    printf("|   /                             \\|\n");
    printf("|   |       value -> degrees      ||\n");
    printf("|   |                             ||\n");
    printf("| 2 |_______!______!_______!______||\n");
    printf("|   |       #      #       #      ||\n");
    printf("|   |   1 asin  2 acos   3 atg    ||\n");
    printf("|___\\_____________________________||\n");
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
        else if (i == 3)

        { // trigonometry
            trigonometry();
            printf("enter two number for the next action (for example 12) ");
            while (i != 0)
            {
                scanf("%d", &i);
                printf("\n");
                if (i == 11)
                {
                    printf("enter x ");
                    scanf("%lf", &x);
                    printf("result %.2lf\n", sin((x / 180) * M_PI));

                    printf("enter two numbers for the next action (for example 12) ");
                    continue;
                }
                else if (i == 12)
                {
                    printf("enter x ");
                    scanf("%lf", &x);
                    printf("result %.2lf\n", cos((x / 180) * M_PI));

                    printf("enter two numbers for next action (for example 12) ");
                    continue;
                }
                else if (i == 13)
                {
                    printf("enter x ");
                    scanf("%lf", &x);
                    if (x - (int) x == 0 && (int) x % 90 == 0 && (int) x % 180 != 0){
                        printf("infinity \n");
                        printf("enter two numbers for next action (for example 12) ");
                    }
                    else {
                        printf("result %.2lf\n", tan((x / 180) * M_PI));
                        printf("enter two numbers for next action (for example 12) ");
                    }
                    continue;
                }
                else if (i == 21){
                    printf("enter x ");
                    scanf("%lf", &x);
                    if (x >= -1 && x <=1){
                        printf("result %.lf\n", 57.692307692307*asin(x));

                        printf("enter two numbers for the next action (for example 12) ");
                    }
                    else{
                        printf("error\n");
                        printf("enter two numbers for next action (for example 12) ");

                    }
                    continue;
                }
                else if (i==22){
                    printf("enter x ");
                    scanf("%lf", &x);
                    if (x >= -1 && x <=1){
                        printf("result %.lf\n", 57.692307692307*acos(x));

                        printf("enter two numbers for next action (for example 12) ");
                    }
                    else {
                        printf("error\n");
                        printf("enter two numbers for next action (for example 12) ");

                    }
                    continue;
                }
                else if (i==23){
                    printf("enter x ");
                    scanf("%lf", &x);
                    printf("result %.lf\n", 57.692307692307*atan(x));

                    printf("enter two numbers for next action (for example 12) ");
                    continue;
                }
            }
            i = -1;
            interface();
            printf("\n");

            printf("enter from 1 to 5 ");
        }
        else if (i == 4)
        {
            double a11, a12, a13, a21, a22, a23, a31, a32, a33;
            matrix();
            while (i != 0)
            {
                scanf("%d", &i);
                printf("\n");
                if (i == 11)
                {
                    printf("a11, a12 ");
                    scanf("%lf %lf", &a11, &a12);
                    printf("a21, a22 ");
                    scanf("%lf %lf", &a21, &a22);
                    printf("result %.2lf\n", a11 * a22 - a12 * a21);
                    
                    continue;
                }
                else if (i == 12)
                {
                    printf("a11, a12 ");
                    scanf("%lf %lf", &a11, &a12);
                    printf("a21, a22 ");
                    scanf("%lf %lf", &a21, &a22);
                    printf("result\n\n%.2lf %.2lf\n%.2lf %.2lf\n", a11, a21, a12, a22);

                    continue;
                }
                else if (i == 13)
                {
                    printf("a11, a12 ");
                    scanf("%lf %lf", &a11, &a12);
                    printf("a21, a22 ");
                    scanf("%lf %lf", &a21, &a22);
                    if (a11 * a22 != a12 * a21)
                        printf("result\n\n%.2lf %.2lf\n%.2lf %.2lf\n", a22, (-1) * a12, (-1) * a21, a11);
                    else
                        printf("det = 0");

                    continue;
                }
                else if (i == 21)
                {
                    printf("a11, a12, a13 ");
                    scanf("%lf %lf %lf", &a11, &a12, &a13);
                    printf("a21, a22, a23 ");
                    scanf("%lf %lf %lf", &a21, &a22, &a23);
                    printf("a31, a32, a33 ");
                    scanf("%lf %lf %lf", &a31, &a32, &a33);
                    printf("result %.2lf\n", (a11 * a22 * a33) + (a21 * a32 * a13) + (a12 * a23 * a31) - (a13 * a22 * a31) - (a32 * a23 * a11) - (a21 * a12 * a33));

                    continue;
                }
                else if (i == 22)
                {
                    printf("a11, a12, a13 ");
                    scanf("%lf %lf %lf", &a11, &a12, &a13);
                    printf("a21, a22, a23 ");
                    scanf("%lf %lf %lf", &a21, &a22, &a23);
                    printf("a31, a32, a33 ");
                    scanf("%lf %lf %lf", &a31, &a32, &a33);
                    printf("\nresult\n\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n", a11, a21, a31, a12, a22, a32, a13, a23, a33);

                    continue;
                }
                else if (i == 23)
                {
                    double A11, A12, A13, A21, A22, A23, A31, A32, A33, det;
                    printf("a11, a12, a13 ");
                    scanf("%lf %lf %lf", &a11, &a12, &a13);
                    printf("a21, a22, a23 ");
                    scanf("%lf %lf %lf", &a21, &a22, &a23);
                    printf("a31, a32, a33 ");
                    scanf("%lf %lf %lf", &a31, &a32, &a33);
                    det = (a11 * a22 * a33) + (a21 * a32 * a13) + (a12 * a23 * a31) - (a13 * a22 * a31) - (a32 * a23 * a11) - (a21 * a12 * a33);
                    // a11 a12 a13      a11 a21 a31
                    // a21 a22 a23      a12 a22 a32
                    // a31 a32 a33      a13 a23 a33
                    if (det != 0)
                    {
                        A11 = (a22 * a33 - a23 * a32) / det;
                        A12 = ((-1) * (a21 * a33 - a23 * a31)) / det;
                        A13 = (a21 * a32 - a22 * a31) / det;
                        A21 = ((-1) * (a12 * a33 - a13 * a32)) / det;
                        A22 = (a11 * a33 - a13 * a31) / det;
                        A23 = ((-1) * (a11 * a32 - a12 * a31)) / det;
                        A31 = (a12 * a23 - a13 * a22) / det;
                        A32 = ((-1) * (a11 * a23 - a13 * a21)) / det;
                        A33 = (a11 * a22 - a12 * a21) / det;
                        printf("\nresult\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf \n", A11, A21, A31, A12, A22, A32, A13, A23, A33);
                    }
                    else
                        printf("det = 0\n");

                    continue;
                }
            }
            i = -1;
            interface();
            printf("\n");
            printf("enter from 1 to 5 ");
        }
        else if (i == 5)
        {
            geometry();
            while (i != 0)
            {
                scanf("%d", &i);
                printf("\n");
                if (i == 1)
                {
                    double a, b, c, p;
                    printf("a, b, c ");
                    scanf("%lf %lf %lf", &a, &b, &c);
                    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
                    {
                        p = (a + b + c) / 2;
                        printf("result %.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));

                        continue;
                    }
                    else
                    {
                        printf("ERROR");
                        continue;
                    }
                }
                else if (i == 2)
                {
                    double conts = 1.3333333333 * 3.1415926535897, x = 0;
                    printf("input r ");
                    scanf("%lf", &x);
                    if (x < 0)
                        x = x * (-1);
                    printf("result %.2lf\n", conts * x * x * x);

                    continue;
                }
                else if (i == 3)
                {
                    printf("input r ");
                    scanf("%lf", &x);
                    if (x < 0)
                        x = -1 * x;
                    printf("result %.2lf\n", M_PI * x * x);

                    continue;
                }
            }
            i = -1;
            interface();
            printf("\n");

            printf("enter from 1 to 5 ");
        }

    }
}
