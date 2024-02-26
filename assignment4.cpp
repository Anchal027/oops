#include<iostream>
using namespace std;
class computation{
	public:
		int compute (int a , int b){
		return a+b;
	}
		float compute(int a, float b){
			return a+b;
		}
		
		double compute(int a, double b){
			return a+b;
		}
		int compute(char a,char b)	{
			return int (a+b);
		}
		int compute(char d, int c){
			return int(d)+c;
		} 
};
int main(){
	computation obj;
	int result1= obj.compute(5,4);
	cout<<"Sum1= "<<result1<<endl;
	float result2= obj.compute(1,2.45);
	cout<<"Sum2= "<<result2<<endl;
	double result3= obj.compute(4,8);
	cout<<"Sum3 = "<<result3<<endl;
	int result4= obj.compute(1,2);
	cout<<"Sum4= "<<result4<<endl;
	int result5=obj.compute(2,3);
	cout<<"Sum5= "<<result5<<endl;
	
	return 0;
}
