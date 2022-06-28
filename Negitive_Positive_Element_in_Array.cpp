#include <iostream>

using namespace std;

int main(){

    int positive , negitive , array[10];

    for(int i = 0 ; i < 10 ; i++){
        cout<<"Enter the Element "<<i+1<<" of the Array : ";
        cin>>array[i];
    }
    cout<<"\t\t\t";  cout<<"Your Array\n";
    cout<<"\t\t\t";  cout<<"-----------\n";
    for(auto k : array){
    cout<<"\t\t\t\t";cout<<k<<endl;
    }
    for(int i = 0 ; i < 10 ; i++){
        if(array[i] > 0){
            positive++;
        }
        if(array[i] < 0){
            negitive++;
        }
    }

    cout<<"This Array has '"<<positive<<"' Positive Elements !"<<endl;
    cout<<"This Array has '"<<negitive<<"' Negitive Elements !"<<endl;

    return 0;
}