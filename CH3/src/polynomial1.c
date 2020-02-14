#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101
typedef struct{
    int degree;
    float coef[MAX_DEGREE];
}polynomial;

polynomial poly_add1(polynomial A, polynomial B)
{
    polynomial C;
    int Apos = 0, Bpos = 0, Cpos = 0;
    int degree_a = A.degree;
    int degree_b = B.degree;
    C.degree = MAX(A.degree, B.degree);

    while (Apos <= A.degree && Bpos <= B.degree){
        if(degree_a > degree_b){
            C.coef[Cpos++] = A.coef[Apos++];
            degree_a--;
        }
        else if (degree_a == degree_b){
            C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
            degree_a--; degree_b--;
        }
        else {
            C.coef[Cpos++] = B.coef[Bpos++];
            degree_b--;
        }
    }
    return C;
}
void print_poly(polynomial p)
{
    for (int i = p.degree; i>0; i--)
        printf("%3.lfx^%d + ", p.coef[p.degree - i], i);
    printf("%3.lf \n", p.coef[p.degree]);
}
int main(void)
{
    polynomial a = {5,{3,6,0,0,0,10}};
    polynomial b = {5,{3,6,0,0,0,10}};
    polynomial c;

    print_poly(a);
    print_poly(b);
    c= poly_add1(a,b);
    printf("-------------------------------------------------------\n");
    print_poly(c);
    return 0;
}