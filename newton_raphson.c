
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//NEWTONS RAPHSON METHOD


double func(double x) { //float was too imprecise!
    return (pow(x,2)-612);
}

double deriv(double x) {
    return (2*x);
}




int main() {
//    double x0 = 10,tol=0.00000001,x1,epsilon=1.0E-10;
    float tol=0.00000001;
    double x0 = 10, x1 = 0 ,epsilon=1.0E-10;
    int max_iterations;

    double *values = malloc(20*sizeof(*values)); //allocate memory for max 20  values of x
    if(values == NULL) {
        printf("Out of memory error./n Exiting.../n");
    }

    printf("Enter the values of  max iterations < 20.\n"); //because we allocated memory for max 20 values
    scanf("%d",&max_iterations);
    if(max_iterations > 20) {
        printf("Entered value of max_iteration is greater than 20.\nPlease enter new value:");
        scanf("%d",&max_iterations);
    }

    printf("iteration\t x0\t\t x1\t\t func\t\t deriv\n");
    printf("---------\t -\t\t -\t\t -----\t\t --------\n");

//Newton Ralphson formula
    for(int i = 0;i <= max_iterations;i++) {
        x1 = x0 - func(x0)/deriv(x0); 
        printf("%d\t\t %.8f\t %.8f\t %.8f\t %.8f\n",i,x0,x1,func(x0),deriv(x0));
            if(fabs(deriv(x0)) < epsilon) {
                printf("We cannot divide by that small number!"); //to avoid division by zero
                return 0;
            } else {
                x0 = x1;
                values[i] = x0; //send the generated values to the array for checking precision
            }
    }

    if(fabs(values[max_iterations] - values[max_iterations-1]) <= tol) { //precision check
        printf("The solution after %d th iteration is %.10f.\n",max_iterations,x1);
        printf("%d th value is %.8f\n",max_iterations,values[max_iterations]);
        printf("%d th value is %.8f\n",max_iterations-1,values[max_iterations-1]);
        printf("The possible error in estimation is %.8f\n",fabs(values[max_iterations]-values[max_iterations-1]));
        printf("where as our tolerance is %.8f",tol);
    } else {
        printf("Failed to meet tolerance after given iterations. So the roots cannot be found!\nMaybe try more iterations?\n");
        printf("%d th value is %.8f\n",max_iterations,values[max_iterations]);
        printf("%d th value is %.8f\n",max_iterations-1,values[max_iterations-1]);
        printf("The possible error in estimation is %.8f\n",fabs(values[max_iterations]-values[max_iterations-1]));
        printf("where as our tolerance is %.8f",tol);
    }

    free(values); //free the allocated memory


    return (0);
}

