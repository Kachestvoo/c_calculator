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

        if (i == 3)
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
                if (i == 12)
                {
                    printf("enter x ");
                    scanf("%lf", &x);
                    printf("result %.2lf\n", cos((x / 180) * M_PI));

                    printf("enter two numbers for next action (for example 12) ");
                    continue;
                }
                if (i == 13)
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
                if (i == 21){
                    printf("enter x ");
                    scanf("%lf", &x);
                    printf("result %.lf\n", 57.692307692307*asin(x));

                    printf("enter two numbers for the next action (for example 12) ");
                    continue;
                }
                if (i==22){
                    printf("enter x ");
                    scanf("%lf", &x);
                    printf("result %.lf\n", 57.692307692307*acos(x));

                    printf("enter two numbers for next action (for example 12) ");
                    continue;
                }
                if (i==23){
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

            }
            i = -1;
            interface();
            printf("\n");
            printf("enter from 1 to 5 ");

}
