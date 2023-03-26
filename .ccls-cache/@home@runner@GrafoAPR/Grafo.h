#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "Aresta.h"
#include "Vertice.h"
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

class Grafo {
private:
  vector<Vertice> vertices;
  int qtV;
  int arestas;
  int mat[6][6];

public:
  void getMatrizAdj() {
    if (vertices.size() == 6) {
      cout << "Grafo completo." << endl;
      for (int x = 0; x < vertices.size(); x++) {
        for (int y = 0; y < vertices.size(); y++) {
          if (vertices[x].eVizinho(vertices[y].getValor())) {
            mat[x][y] = 1;
          }
        }
        cout << endl;
      }
    } else {
      cout << "Grafo incompleto." << vertices.size() << endl;
    }

    cout << "X 1 2 3 4 5 6" << endl;
    for (int l = 0; l < 6; l++) {
      cout << l + 1 << " ";
      for (int c = 0; c < 6; c++) {
        cout << mat[l][c] << " ";
      }
      cout << endl;
    }
  }

  void addVertice(Vertice *ver) {
    if (ver != NULL) {
      this->vertices.push_back(*ver);
    } else {
      cout << "Parametro de vertice NULO." << endl;
    }
  }

  /*void addAresta(Aresta *are){
          if(ver!=NULL){
                  this->arestas.push_back(*are);
          }else {
                  cout <<"Parametro de vertice NULO."<<endl;
          }
  }*/

  Grafo() {
    cout << "Executando Construtor." << endl;
    for (int l = 0; l < 6; l++) {
      for (int c = 0; c < 6; c++) {
        mat[l][c] = 0;
      }
    }
  }
};

#endif