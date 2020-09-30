typedef struct triangulo
{
    double x;
    double y;
    double z;
} Triangulo;

Triangulo* cria (double x, double y, double z);

double atribui (Triangulo*, double x, double y, double z);

double obtem_perimetro (Triangulo* t, double* x, double* y, double* z);

void libera (Triangulo* t);