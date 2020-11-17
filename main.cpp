// ACTIVIDAD 4.3
// Mauricio E. Zambrano - A00827055
// Fernando Doddoli - A00827038
// Cristobal Escamilla - A008



#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>


using namespace std;

// void load(){

//     to_string(stoi(mapaIp[i][1])++);
// }

int outdegree(vector< vector< int> > &listAdj, unordered_map<int, vector<string> > &mapaIp, int n){
    int max = 0;

    for(int i = 0; i < n; i++){
        if(stoi(mapaIp[i][1]) > max){   //Converts outdegree string to int and compares with max
            max = stoi(mapaIp[i][1]);
        }
    }

    return max;
}

//Imprime todos los vectores con outdegree maximo
void printIpMaximumOutdegree(int max, unordered_map<int, vector<string> > &mapaIp, int n){
    cout << "Ip's con mayor numero de fanouts:" << endl;
    cout << "Fanouts: " << max << endl;

    for(int i = 0; i < n; i++){
        if(stoi(mapaIp[i][1]) == max){
            cout << mapaIp[i][0] << endl;
        }
    }
}

void printIpRangoOutdegree(unordered_map<int, vector<string> > &mapaIp, int n){
    cout << "Ingrese número mínimo de fanouts que quisiera consultar:    (El número debería de ser mayor a x)" << endl;  //PONER NUMERO MENOR POSIBLE
    
    int max;

    cin >> max;

    cout << "Fanouts: " << max << endl;

    for(int i = 0; i < n; i++){
        if(stoi(mapaIp[i][1]) >= max){
            cout << mapaIp[i][0] << " tiene " << mapaIp[i][1] << " fanouts." << endl;
        }
    }
}

int main(){
    


    //A la hora de leer meter a mapa [key, [ip, numero de outdegree(en string) ] ]
    unordered_map<int, vector<string> > mapaIp;

    return 0;
}