#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main()
{
    int nilai;
    char indeks;
    cout<<"Masukan Nilai Ujian: ";
    cin>>nilai;
    cout<<"Grade : ";
    if((nilai>=90)&&(nilai<=100))
    {indeks='A';}
    else if((nilai>=80)&&(nilai<90))
    {indeks='B';}
    else if((nilai>=60)&&(nilai<80))
    {indeks='C';}
    else if((nilai>=50)&&(nilai<60))
    {indeks='D';}
    else
    {indeks='E';}
    cout<<indeks;
    cin.get();
return 0;
}
