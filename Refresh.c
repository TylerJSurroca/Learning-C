#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int thirtysixty(float *ptrA, float *ptrB, float *ptrC)
{

    *ptrA = sqrt(3);
    *ptrB = 1;
    *ptrC = 2;

}

int fourtyfive(float *ptrD, float *ptrE, float *ptrF)
{

    *ptrD = 1;
    *ptrE = 1;
    *ptrF = sqrt(2);

}

float trigfunction(float a, float b)
{
    float answer = 0;

    answer = a / b;

    return answer;

}

void printTriangleStats(float opp, float hyp, float adj)
{
    float sn = trigfunction(opp,hyp);
        printf("Sine is %f\n",sn);

        float cs = trigfunction(adj,hyp);
        printf("Cosine is %f\n",cs);

        float tn = trigfunction(opp,adj);
        printf("Tangent is %f\n",tn);

        float csc = trigfunction(hyp,opp);
        printf("Cosecant is %f\n",csc);

        float sec = trigfunction(hyp,adj);
        printf("Secant is %f\n",sec);

        float cot = trigfunction(adj,opp);
        printf("Cotangent is %f\n",cot);

}

int main()
{
    for( ; ; )
    {
        double x,sinfunc,radian;
        radian = PI / 180;
        //sets variables

        printf("Enter a degree: ");
        scanf("%lf",&x);
        //scans the number and applies it to x

        sinfunc = sin(x*radian);
        printf("The sine of your degree is %lf\n",sinfunc);
        //runs x through sinfunc and then prints the value out

            //start of special triangle code
            int deg;

            printf("Enter a right triangle degree: ");
            scanf("%d",&deg);
            //sets value of degree, user input

            switch(deg)
            {
                float opp,hyp,adj;
                int Continue;

                case 60:
                printf("Your triangle is a 60-30!\n");
                int specialtriangle1 = thirtysixty(&opp,&adj,&hyp);
                printTriangleStats(opp, hyp, adj);
                break;

                case 30:
                printf("Your triangle is a 60-30!\n");
                int specialtriangle2 = thirtysixty(&opp,&adj,&hyp);
                printTriangleStats(opp, hyp, adj);
                break;

                case 45:
                printf("Your triangle is a 45-45!\n");
                int specialtriangle3 = fourtyfive(&opp,&adj,&hyp);
                printTriangleStats(opp, hyp, adj);
                break;
            }
    }

    return(0);
}
