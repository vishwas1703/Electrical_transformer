#include <stdio.h>
#include "data.h"
double v_out(double, int, int);                             /* Computes the output voltage of a transformer */
double i_out(double, int, int);                             /* Computes the output current of a transformer */
transformer_t set_n1_for_v2(transformer_t *, double);       /* Set the number of primary wiring to produce the desired voltage for v2 */
transformer_t set_v1_for_v2(transformer_t *, double);       /* Set the primary voltage to produce the desired voltage for v2 */
transformer_t set_n2_for_v2(transformer_t *, double);       /* Set the number of secondary wiring to produce the desired voltage for v2 */
transformer_t set_n2_for_i2(transformer_t *, double);       /* Set the number of secondary wiring to produce the desired current for i2 */
int scan_transformer(transformer_t *);                      /* Gets values for the transformer */
void print_transformer(transformer_t);                      /* Prints calculated values for the transformer */
int user()
{
    /* Declare variables */
    transformer_t tran_v;                                   /* Contains n1, n2, v1, i1 for transformer calculation */
    double        v2,                                       /* The output voltage */
                  i2;                                       /* The output current */
   
    scan_transformer(&tran_v);
   
    v2 = v_out(tran_v.v1, tran_v.n1, tran_v.n2);
    printf("\nCurrent output voltage (v2): %.1f", v2);
   
    i2 = i_out(tran_v.i1, tran_v.n1, tran_v.n2);
    printf("\nCurrent output current (i2): %.1f", i2);
   
    printf("\n");
    printf("\nEnter new output voltage towards the calculation of n1: ");
    scanf("%lf", &v2);
    print_transformer(set_n1_for_v2(&tran_v, v2));
    printf("\nEnter new output voltage towards the calculation of v1: ");
    scanf("%lf", &v2);
    print_transformer(set_v1_for_v2(&tran_v, v2));
    printf("\nEnter new output voltage towards the calculation of n2: ");
    scanf("%lf", &v2);
    print_transformer(set_n2_for_v2(&tran_v, v2));
    printf("\nEnter new output current towards the calculation of n2: ");
    scanf("%lf", &i2);
    print_transformer(set_n2_for_i2(&tran_v, i2));
   
    return 0;   
}
