

   #include <iostream>
   using namespace std;
        int main(){
            // This is basically a program to print the calculator
            int a;
            int b;
            char op;
            cout<<" Enter the problem:- ";
            cin>>a>>op>>b;

            switch(op){
                case '+':
                 cout<<a+b; // this is for add
                 break;

                case '-':
                 cout<<a-b; // this is for sub
                 break;

                case '*':
                cout<<a*b; // This is for multiply
                break;

                case '/':
                cout<<a/b; // This is for divide
                break;
            }
            return 0;

        }