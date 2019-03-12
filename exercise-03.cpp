/*
nama 			: alfian fadhil
npm				: 140810180055
deskriptif		: Progam menentukan luas,keliling,dan diagonal
tahun			: 2019
*/
#include<iostream>
#include <cmath>

using namespace std;

typedef struct{
	float panjang;
	float lebar;
}segiempat;

void input(segiempat* s){
	cout<<"masukan panjang : ";cin>>s->panjang;
	cout<<"masukan lebar : ";cin>>s->lebar;
}
float keliling(segiempat s){
	return ((s.panjang+s.lebar)*2);
}
float luas(segiempat s){
	return (s.lebar*s.panjang);
}
float diagonal(segiempat s){
	return ((s.panjang*s.panjang)+(s.lebar*s.lebar));
}
void print(segiempat s){
	cout<<"keliling : "<<keliling(s)<<endl;
	cout<<"luas : "<<luas(s)<<endl;
	cout<<"diagonal : "<<diagonal(s)<<endl;
}



int main(){
	
	
	segiempat* sg;
	sg=new segiempat;
	input(sg);
	print(*sg);
	
	
}
