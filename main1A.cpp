#include "func1A.h"

int main(int argc, const char *argv[]){
    
    const char *fileName =  argv[1];

    int n = 0,
        a = 0;

    double  average = 0.0,
            sum = 0.0;
    

    CountInput(fileName,n);

    double *array = new double[n];

    std::ifstream myReadFile;

    myReadFile.open(fileName);

    if(myReadFile){    
        int counter = 0;
        while(myReadFile >> a){
            sum += a;
            array[counter] = a;
            counter++; 
        }

        myReadFile.close();
    
        average = sum/n;
 
        PrintNumbers(average, array, n);
    
        delete [] array;
        array = 0;
        return 0;
    }
    else{
        myReadFile.close();
        std::cout << "Error with opening file has occured";
        delete[] array;
        array = 0;

        exit(EXIT_FAILURE);

    }
}