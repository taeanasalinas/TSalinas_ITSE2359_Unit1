#include <iostream>
#include <fstream>


using namespace std;

int main () {

    ifstream inFile ("student_data.txt");
    int size = 52;
    string name[size];
    int age[size];
    float gpa[size];
    string line;
    double sum, avg;
    bool firstNumber = true;
    float max;
    int oldest, youngest;
    oldest = age[size];
    youngest = age[size];
     

    for (int i = 0; i < size; i++) {
        getline(inFile, line);
        inFile >> name[i] >> age[i] >> gpa[i];

        sum = sum + gpa[i];   
        avg = sum / size;
        }

        cout << "Average GPA: " << avg << endl; 
     inFile.close();   

    for (int i = 0; i < size; i++) {
        getline(inFile, line);
        inFile >> name[i] >> age[i] >> gpa[i];
    {
        if (gpa[i] > max){
            max = gpa[i];
        }
    }
        
        }

        cout << "Highest GPA: " << max << endl; 
     inFile.close();  
            
    for (int i = 0; i < size; i++) {
        getline(inFile, line);
        inFile >> name[i] >> age[i];
            if (age[i] > oldest)
        {
            oldest = age[i];
        }
        
        cout << "Oldest: " << oldest << name[i] << endl;
        
        {break;}
    }
        

    for (int i = 0; i < size; i++) {
        
        inFile >> name[i] >> age[i];
        getline(inFile, line);

        if (age[i] < youngest)
        {
            youngest = age[i];
        }

        cout << "Youngest: " << youngest << name[i] << endl;
        {break;}
    }
inFile.close();
    
       
        return 0;
}





