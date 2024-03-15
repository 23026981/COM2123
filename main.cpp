#include <iostream>

using namespace std;

int main()
{
    double merchandise;
    cout<<"Enter the total cost of merchandise: ";
    cin>>merchandise;

    double employees_salary;
    cout<<"Enter the employees salary: ";
    cin>>employees_salary;

    double own_Salary;
    cout<<"Enter your own salary: ";
    cin>> own_Salary;

    double yearly_rent;
    cout<<"Enter the yearly rent: ";
    cin>>yearly_rent;

    double Electricity_cost;
    cout<<"Enter your the estimate electricity cost: ";
    cin>>Electricity_cost;

double sum;
sum = merchandise + employees_salary + own_Salary + yearly_rent + Electricity_cost;
cout<<"Total expenses is "<<(sum)<<endl;

double Desired_profit = merchandise * 0.1;
double New_profit = Desired_profit/0.85;

double markup = (New_profit + sum)/merchandise;


    return 0;
}
