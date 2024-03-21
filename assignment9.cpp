//friend function
#include<iostream>
using namespace std;
class bca{
	private:
		float height;
		public:
	bca(){}
	bca(float h){height=h;}
	void getdata(){
		cout<<"Height = "<<height<<endl;
	}
	friend float operator + (bca obj1, bca obj2 );
};
float operator+(bca obj1, bca obj2){
	return obj1.height + obj2.height ;
}
int main(){
	bca obj1(123.45);
	bca obj2(334.35);
	float result=obj1+obj2;
	cout<<"Sum of 2 objects: "<<result<<endl;
	return 0;
}

