#include <cmath>
#include <iostream>
using namespace std;

void populateArray(int array[], int& inputLength){
    
    cout<<"How many numbers would you like to input?"<<endl;
    if(!(cin >> inputLength)){
        
        cout<<"Input was not valid";
    }
    else{
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
    stdD = sqrt(stdD)/((double)inputLength-1);
    
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