/*
 * Programación de estructuras de datos y algoritmos fundamentales
 * Actividad 4.3 - Actividad integral de grafos
 * 
 * Equipo 13
 * 
 * Fernando Doddoli Lankenau - A00827038
 * Mauricio Eugenio Zambrano Díaz - A00827055
 * Cristóbal Alberto Escamilla Sada - A00827074
 * 
 * 20 de noviembre del 2020
 */

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// Lee el archivo de entrada y modifica la lista de adjacencias
// así como el unordered map (parámetros por referencia) respectivamente
// Complejidad: O(n^2)
void leeArchivo(vector< vector<int> > &listaAdj, unordered_map< string, pair<int, int> > &mapaIP){
    ifstream archivo("bitacoraACT4_3_B.txt");
    pair<int, int> uno;
    int n, m, dia;
    string mes, hora, ipOut, ipIn, razon;

    archivo >> n >> m;

    for(int i = 0; i < n; i++){
        archivo >> ipOut;
        uno.first = i;
        uno.second = 0;
        mapaIP[ipOut] = uno; 
    }

    while(archivo >> mes >> dia >> hora >> ipOut >> ipIn){
        getline(archivo, razon);
        ipOut = ipOut.substr(0,ipOut.length()-5);
        ipIn = ipIn.substr(0, ipIn.length()-5);
        listaAdj[mapaIP[ipOut].first].push_back(mapaIP[ipIn].first);
        mapaIP[ipOut].second++;
    }

    archivo.close();
}

/*
    void maxFanOut(vector< vector<int> > listaAdj, unordered_map< string, pair<int, int> > mapaIP){
        int maxFanOut = 0;
        pair<int, int> par;
        vector<string> max;

        for(int i = 0; i < listaAdj.size(); i++)
            if(listaAdj[i].size() > maxFanOut)
                maxFanOut = listaAdj[i].size();

        for(int i = 0; i < mapaIP.size(); i++){
            
        }
    }
*/


int main(){


    return 0;
}