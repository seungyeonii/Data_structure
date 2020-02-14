// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_DEGREE 101
// typedef struct{
//     float coef;
//     int expon;
// }polynomial;
// polynomial term[MAX_TERMS] = {{8,3},{7,1},{1,0},{10,3},{3,2},{1,0}};
// int avail = 6;

// char compare(int a, int b)
// {
//     if (a>b) return '>';
//     else if (a==b) return '=';
//     else return '<';
// }

// polynomial poly_add1(polynomial A, polynomial B)
// {
//     polynomial C;
//     int Apos = 0, Bpos = 0, Cpos = 0;
//     int degree_a = A.degree;
//     int degree_b = B.degree;
//     C.degree = MAX(A.degree, B.degree);

//     while (Apos <= A.degree && Bpos <= B.degree){
//         if(degree_a > degree_b){
//             C.coef[Cpos++] = A.coef[Apos++];
//             degree_a--;
//         }
//         else if (degree_a == degree_b){
//             C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
//             degree_a--; degree_b--;
//         }
//         else {
//             C.coef[Cpos++] = B.coef[Bpos++];
//             degree_b--;
//         }
//     }
//     return C;
// }
// void print_poly(polynomial p)
// {
//     for (int i = p.degree; i>0; i--)
//         printf("%3.lfx^%d + ", p.coef[p.degree - i], i);
//     printf("%3.lf \n", p.coef[p.degree]);
// }
// int main(void)
// {
//     polynomial a = {5,{3,6,0,0,0,10}};
//     polynomial b = {5,{3,6,0,0,0,10}};
//     polynomial c;

//     print_poly(a);
//     print_poly(b);
//     c= poly_add1(a,b);
//     printf("-------------------------------------------------------\n");
//     print_poly(c);
//     return 0;
// }