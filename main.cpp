// ACTIVIDAD 4.3
// Mauricio E. Zambrano - A00827055
// Fernando Doddoli - A00827038
// Cristobal Escamilla - A008



#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int bootMasterOutDegree(vector<int> &Outdegrees, int n){

    int bootMasterOutDegree = 0;
    for(int i = 0; i < n; i++){
        bootMasterOutDegree = max(bootMasterOutDegree, Outdegrees[i]); 
    }
    
    //Imprimir el nodo con el mayor outdegree 
    cout << "Nodo con el mayor outdegree : "; 
    for (int i = 0; i < n; i++) { 
        if (Outdegrees[i] == bootMasterOutDegree) 
            return i; 
    } 
    cout << endl; 
}

int main(){
    int n, m;
    string bootMaster;
    vector<vector <int> > listAdj(n);
    vector<int> Outdegrees(listAdj.size());
    

    return 0;
}
