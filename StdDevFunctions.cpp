#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

void populateArray(int array[], int& inputLength){
    
    cout<<"How many numbers would you like to input?"<<endl;
    if(!(cin >> inputLength)){
        
        cout<<"Input was not valid";
    }
    else{
        if(inputLength<2 || inputLength >9000)
        {
            populateArray(array,inputLength);
        }
        for(int i=0; i<inputLength;i++){
            
            int temp;
            cout<<"Input the next value"<<endl;
            /*if (!cin>>temp)
             {
             cout<<"Input was not valid";
             }
             else{
             array[i] = temp;
             }*/
            cin>>temp;
            array[i] = temp;
        }
    }
    
    return;
}

void populateArrayFromFile(int array[], int& inputLength){
    string filename;
    cout<<"Please input the name of the file"<<endl;
    cin>>filename;
    
    ifstream fin;
    fin.open(filename.c_str());
    if(fin.fail()){
        cout<<"Could not open file. Please try again."<<endl;
        
    }
    else{
        //opened file! YAY!
        
        //get the first number, which is expected as the length of lines-1
        fin>>inputLength;
        for(int i=0;i<inputLength;i++){
            int temp;
            fin>>temp;
            array[i] = temp;
            
        }
    }
}
    
    
    
void findStdDeviation(int array[],int inputLength,double& mean,double& stdD){
    
    //calculate mean
    int sum = 0;
    for(int i=0; i<inputLength;i++){
        sum +=array[i];
    }
    mean = (double)sum/(double)inputLength;
    //calculate standard deviation
    stdD = 0;
    
    for(int i=0; i<inputLength;i++){
        stdD +=((double)array[i]-mean)*((double)array[i]-mean);
    }
    stdD = sqrt(stdD/((double)inputLength-1));
    
    return;
    
}

void outputData(int array[],int inputLength, double mean,double stdD){
    
    cout<<"/////////////////////"<<endl<<"OUTPUT:"<<endl;
    for(int i=0; i<inputLength;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    //now calculate the standard deviation and mean and display it
        cout<<"Standard Deviation: "<<stdD<<endl;
    cout<<"Mean: "<<mean<<endl;
    
}