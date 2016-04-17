#include <iostream>

using namespace std;
struct task{
int process;
int burstTime;
int priority;
};
int main()
{
    int val,quant;
int sum=0;
    cout << "Enter Quantum Time : ";cin>>quant;
    cout << "Enter Number Of Process : ";cin>>val;

    task first[val];
    for(int i = 0; i < val; i++){
    cout << "Enter Process : ";cin>>first[i].process;
    cout << "Enter burstTime : ";cin>>first[i].burstTime;
    cout << "Enter Priority : ";cin>>first[i].priority;
    }
    cout << "\n\t\t Process \t BurstTime \t Process"<<endl;

   do{
       sum = 0;
   for(int i = 0; i < val; i++){

            if(first[i].burstTime > quant && first[i].burstTime != -1){
        cout << "\t\t    "<<first[i].process;
        cout <<"\t\t     "<<first[i].burstTime-quant;
        first[i].burstTime -= quant;
        cout << "\t\t    "<<first[i].priority<<endl;
        sum += first[i].burstTime;
            }
            else{
        cout << "\t\t    "<<first[i].process;
        cout <<"\t\t     "<<first[i].burstTime;
        first[i].burstTime -= quant;
        cout << "\t\t    "<<first[i].priority<<endl;
            }
            }
   }while(sum != 0);
    return 0;
}
