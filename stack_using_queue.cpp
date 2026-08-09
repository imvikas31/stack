#include<bits/stdc++.h>
using namespace std;

class QueueStack{
    public:
    queue<int>q1;
    queue<int>q2;

    QueueStack(){
        cout<<"Stack created from queue"<<endl;
    }

    void push(int data){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(data);

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }

    
};

int main(){

    QueueStack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);


    return 0;
}