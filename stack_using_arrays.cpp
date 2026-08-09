#include<bits/stdc++.h>
using namespace std;

class ArrayStack{
    public:
    int* arr;
    int s;
    int topIndex;

    ArrayStack(int s = 1000){
        this->s = s;
        topIndex = -1;
        arr = new int[s];
        cout<<"Stack Created\n";
    }

    void push(int data){
        if(topIndex == s-1){
            cout<<"stack overflow\n";
            return;
        }
        topIndex++;
        arr[topIndex] = data;
        cout<<data<<" added to the stack\n";
    }
     int pop(){
        if(topIndex == -1){
            cout<<"Stack Empty\n";
            return -1;
        }

        int topElement = arr[topIndex];
        topIndex--;
        return topElement;
    }


    ~ArrayStack(){
        delete[] arr;
    }

};

int main(){

    ArrayStack s1(5);


    s1.push(10);
    cout<<endl;


    cout<<"Element removed: "<<s1.pop()<<endl;

  
    cout<<endl;
    

    return 0;

}