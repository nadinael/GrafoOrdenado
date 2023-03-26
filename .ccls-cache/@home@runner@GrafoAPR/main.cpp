#include "Grafo.h"
#include "Vertice.h"
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  // Criando um grafo DIRECIONADO com 6 vértices
  Grafo *grafo = new Grafo();
  Vertice *v1 = new Vertice(1);
  Vertice *v2 = new Vertice(2);
  Vertice *v3 = new Vertice(3);
  Vertice *v4 = new Vertice(4);
  Vertice *v5 = new Vertice(5);
  Vertice *v6 = new Vertice(6);
  // Vertices "apontando" para seus vizinhos (arestas)
  v1->addAdj(v2);
  v1->addAdj(v4);
  v2->addAdj(v5);
  v3->addAdj(v5);
  v3->addAdj(v6);
  v4->addAdj(v2);
  v5->addAdj(v4);
  v6->addAdj(v6);
  // arestas configuradas
  // adicionando vertices ao grafo
  grafo->addVertice(v1);
  grafo->addVertice(v2);
  grafo->addVertice(v3);
  grafo->addVertice(v4);
  grafo->addVertice(v5);
  grafo->addVertice(v6);
  /// hora de mostrar a matriz de adjacencias
  grafo->getMatrizAdj();
  return 0;
}