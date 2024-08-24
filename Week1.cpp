#include <iostream>
#include <fstream>


using namespace std;

int main () {

    ifstream inFile ("student_data.txt");
    int size = 53;
    int age[size];
    float gpa[size];
    string name[size];
    string line;
    

    if (inFile) {
            cerr <<  "Error" << endl;

            
    }

    for (int i = 0; i < size; i++) {
        
        getline(inFile, line);
        
        inFile >> age[i];

        name[i] = line;

        getline(inFile, line);
    }

    inFile.close();

    for (int i = 0; i < 52; i++)   {
        
       cout << name[i] << ": ";
       cout << gpa[i] << endl;

    
    }

    return 0;
}





