#include <stdio.h>
#include <math.h>
//NEWTONS RAPHSON METHOD


double func(double x) { //float was too imprecise!
    return (pow(x,2)-612);
}

double deriv(double x) {
    return (2*x);
}

int main() {

    double x0 = 10,tol=0.00000001,x1,epsilon=1.0E-10;
    int max_iterations;

    printf("Enter the values of  max iterations.\n");
    scanf("%d",&max_iterations);

    printf("iteration\t x0\t\t x1\t\t func\t\t deriv\n");
    printf("---------\t -\t\t -\t\t -----\t\t --------\n");


    for(int i = 0;i <= max_iterations;i++) {
        x1 = x0 - func(x0)/deriv(x0); //Newton Ralphson formula
        printf("%d\t\t %.8f\t %.8f\t %.8f\t %.8f\n",i,x0,x1,func(x0),deriv(x0));
            if(fabs(deriv(x0)) < epsilon) {
                printf("We cannot divide by that small number!"); //to avoid division by zero
                return 0;
            } else {
                x0=x1;
            }
    }

    if(fabs(x1 - x0) <= tol) {
        printf("The solution after %d th iteration is %.10f.\n",max_iterations,x1);
    } else {
        printf("Failed to meet tolerance after givern iterations. So the roots cannot be found!\n");
    }


    return (0);
}

