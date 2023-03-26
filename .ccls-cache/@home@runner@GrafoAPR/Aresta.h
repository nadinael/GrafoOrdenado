#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED
#include "Vertice.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Aresta{
	private:
	int peso = 1;
	Vertice *origem;
	Vertice *destino;
	public:
	void apontarAresta(Vertice *ori, Vertice *dest){
		if(ori!=NULL && dest != NULL){
			this->origem = ori;
			this->destino = dest;
		}else {
			cout <<"Nao foi possivel apontar arestas pois um ou mais parametros eh nulo."<<endl;
		}
	} 
};

#endif