#include<iostream>
#include <cstdlib>
using namespace std;
int stack[1];
int top = 0;
int sizeofstack = sizeof(stack)/sizeof(stack[0]);

void push(int num){
    if(top <= sizeofstack-1){
        stack[top] = num;
        top++;
    }else{
        cout << "Error: Stack overflow (cannot push more elements).";
        exit(1);
    }
}

int pop(){
    if(top <= 0){
        cout<<" Error: Stack underflow (no elements to pop).";
        exit(1);
    }
    else{
        top--;
        return stack[top];
    }
}
int eval(char ch, int pop1, int pop2){
    switch(ch){
        case '+':return(pop1 + pop2);
        case '-':return(pop1 - pop2);
        case '*':return(pop1 * pop2);
        case '/':
        if (pop2 == 0) {
                cout <<"Error: Division by zero." << endl;
                exit(1);
            }else{
            return (pop1 / pop2);}
        default:
            cout << "Invalid operator: " << ch << endl;
            cout<<"your exprition is wrong";
            exit(1);
    }
}
int main(){
    char exp[100], ch;
    int num, pop1, pop2;
    cout << "please enter the postfix exprition"<<endl;
    cin>>exp;
    for(int i = 0; exp[i]!='\0'; i++){
        ch = exp[i];
        if(ch >= '0' && ch <= '9'){
            num = ch -'0';
            push(num);
        }else{
            pop2 = pop();
            pop1 = pop();
            push(eval(ch, pop1, pop2));
        }
    }
    cout <<"evaluwated number is : " << pop();
}
