# include <stdio.h>
        struct complex
        {
                float real;
                float imag;
        };
        struct complex c1,c2;
void add(struct complex n1,struct complex n2);
int main()
{
        struct complex c1,c2;
        printf("Enter the real and imaginary part of the first complex no.: ");
        scanf("%f%f",&c1.real,&c1.imag);
        printf("Enter the real and imaginary part of the second complex no.: ");
        scanf("%f%f",&c2.real,&c2.imag);
        add(c1,c2);
}
 void add(struct complex n1,struct complex n2)
{
        float sum_real,sum_imag,diff;
        sum_real=n1.real+n2.real;
        sum_imag=n1.imag+n2.imag;
        printf("The sum of the two complex no.s is: %f +i*(%f)",sum_real,sum_imag);
}
