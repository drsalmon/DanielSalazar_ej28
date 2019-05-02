#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

int main(){
    
    int nuevo_x = 200;
    int nuevo_t = 100;
    int k = 200;
    int c = 900;
    int rho = 2700;
    float delta_x = 0.01;
    float delta_t = 0.5;
    double n;
    int r = 2;
    //n_puntos = 101;
    double algo[200][nuevo_x];
    int i;
    ofstream outfile;
    
    for (i=0; i <= nuevo_x; i++){
        algo[1][i] = 300.0;
        algo[0][i] = 300.0;   
    
    }
    
    n = k*delta_t/(c*rho)*(delta_x*delta_x);
   /* algo[1][0] = 0;
    algo[0][0] = 0;
    algo[1][nuevo_x] = 0;
    algo[0][nuevo_x] = 0;
    */
    
    for (i = 0; i< nuevo_t; i++){
        for (int j= 0; j< nuevo_x; j++){
            algo[1][j] = 300.0;
            if ((i>0.8) && (i<1.2)){
                if (j==500){
                    algo[i][j] = 500;
                }
            }
            
            algo[1][j] = algo[0][j]+ n*(algo[0][j+1]+algo[0][j-1]-(r*algo[0][j]));
        }
        for (int k = 1; k<= nuevo_x; k++){
            algo[0][k] += algo[1][k];
        }
    }
    

    outfile.open("imagenes.dat");
    
    
    for (int j = 0; j<nuevo_x; j++){
        outfile<<algo[0][j]<<endl;
    }
    
    outfile.close();
    return 0;
    
}
