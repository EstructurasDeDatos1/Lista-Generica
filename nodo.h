#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo{
    void *dato;
    struct Nodo *s;
};
typedef struct Nodo TNodo;

TNodo *creaNodo(void *dato,int tam);
void liberaNodo(TNodo *nodo);

#endif // NODO_H_INCLUDED
