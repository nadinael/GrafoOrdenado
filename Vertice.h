#ifndef VERTICE_H_INCLUDED
#define VERTICE_H_INCLUDED
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

class Vertice {
private:
  int valor;
  vector<Vertice> adj;

public:
  Vertice(int v) { this->valor = v; }

  int getValor() { return this->valor; }

  void addAdj(Vertice *vizinho) { this->adj.push_back(*vizinho); }

  void meusVizinhos() {
    cout << "meus vizinhos" << endl;
    for (int x = 0; x < adj.size(); x++) {
      cout << adj[x].getValor() << endl;
    }
  }
  bool eVizinho(int v) {

    for (int x = 0; x < adj.size(); x++) {
      /*cout << "meu valor: " << this->getValor()
           << " valor do vizinho: " << adj[x].getValor()
           << " valor do param: " << v << endl;*/
      if (adj[x].getValor() == v) {
        return true;
      } 
    }
    return false;
  }
};

#endif