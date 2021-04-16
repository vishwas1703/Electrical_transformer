#include<stdio.h>
#include "data.h"
double v_out(double, int, int);                             /* Computes the output voltage of a transformer */
double i_out(double, int, int);                             /* Computes the output current of a transformer */
transformer_t set_n1_for_v2(transformer_t *, double);       /* Set the number of primary wiring to produce the desired voltage for v2 */
transformer_t set_v1_for_v2(transformer_t *, double);       /* Set the primary voltage to produce the desired voltage for v2 */
transformer_t set_n2_for_v2(transformer_t *, double);       /* Set the number of secondary wiring to produce the desired voltage for v2 */
transformer_t set_n2_for_i2(transformer_t *, double);       /* Set the number of secondary wiring to produce the desired current for i2 */
int scan_transformer(transformer_t *);                      /* Gets values for the transformer */
void print_transformer(transformer_t);                       /* Prints calculated values for the transformer */
int main()
{
    void user();
}
int scan_transformer(transformer_t *tranp)
{
    int result;                                             /* The result of whether the wire, current, and voltage values have been entered */
   
    printf("\nEnter current number of primary wire windings (n1): ");
    scanf("%lf", &tranp->n1);
    while (tranp->n1 < 0)
    {
     printf("\nEnter current number of primary wire windings (n1): ");
     scanf("%lf", &tranp->n1);
    }
    result = tranp->n1;
    printf("\nEnter current number of secondary wire windings (n2): ");
    scanf("%lf", &tranp->n2);
    while (tranp->n2 < 0)
    {
     printf("\nEnter current number of secondary wire windings (n2): ");
     scanf("%lf", &tranp->n2);
    }
    result = tranp->n2;
    printf("\nEnter primary voltage (v1): ");
    result = scanf("%lf", &tranp->v1);
    printf("\nEnter primary current (i1): ");
    result = scanf("%lf", &tranp->i1);
   
    /* Verify if all structure input values have been entered */
    if (result == 4)
     result = 0;
    else if (result != EOF)
     result = 1;
     
    return result;   
}

void print_transformer(transformer_t tranp)
{   
    printf("\nThe desired number of windings for the first wire is %.0f", tranp.n1);
    printf("\nThe desired number of windings for the second wire is %.0f", tranp.n2);
    printf("\nThe desired input voltage is %.1f", tranp.v1);
    printf("\nThe desired input current is %.1f\n", tranp.i1);
}

double v_out(double volt1, int tran1, int tran2)
{     
    return volt1 * tran2 / tran1;
}

double i_out(double curr1, int tran1, int tran2)
{     
    return curr1 * tran1 / tran2;
}

transformer_t set_n1_for_v2(transformer_t *tranp, double volt2)
{   
    tranp->n1 = tranp->v1 * tranp->n2 / volt2;
   
    return *tranp;
}

transformer_t set_v1_for_v2(transformer_t *tranp, double volt2)
{   
    tranp->v1 = volt2 * tranp->n1 / tranp->n2;
   
    return *tranp;         
}

transformer_t set_n2_for_v2(transformer_t *tranp, double volt2)
{   
    tranp->n2 = volt2 * tranp->n1 / tranp->v1;             
   
    return *tranp;
}

transformer_t set_n2_for_i2(transformer_t *tranp, double curr2)
{   
    tranp->n2 = tranp->i1 * tranp->n1 / curr2;         
   
    return *tranp;
}