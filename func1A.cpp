#include "func1A.h"


void CountInput(const char *fileName, int &n){
    
    int a = 0;
    std::ifstream myReadFile;

    myReadFile.open(fileName);
    
    while(myReadFile >> a){
        n++;
    }  

   myReadFile.close();
}

void PrintNumbers(double average, double array[], int n){

    
    for(int i = 0; i < n; i++){
        if(array[i] > average)
            std::cout << array[i] << " ";
    }    

}