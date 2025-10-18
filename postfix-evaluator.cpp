#include<iostream>
using namespace std;

int stack[20], top = 0;
int stacksize =sizeof(stack)/sizeof(stack[0]);

void push(int a){
    if(top<=stacksize-1){
        stack[top]=a;
        top++;
    }
    else{
        cout<<"stack is overflow";
    }
}
int pop(){
    if(top == 0){
        cout<<"stack is undderflow";
        return 0;
    }
    else{
        top--;
        return stack[top];
    }
}
int eval(char ch, int pop1, int pop2){
    switch(ch){
        case '+':return(pop1+pop2);
        case '-':return(pop1-pop2);
        case '/':return(pop1/pop2);
        case '*':return(pop1*pop2);
    }
}
int main(){
    char exp[100], ch;
    cout<<"enter the Postfix exprtion :"<< endl;
    cin>>exp;
    int pop1, pop2;
    for(int i = 0;exp[i]!='\0';i++){
        ch=exp[i];
        if(ch>='0' && ch<='9'){
            push(ch-'0');
        }
        else{
            pop2 = pop();
            pop1 = pop();
            push(eval(ch, pop1, pop2));
        }
    }
    cout <<"evaluwated number is : " << pop();
    
}