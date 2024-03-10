#include<iostream>
#include<cstring>
using namespace std;
class sample {
	public:
		char*name;
public:
	
 sample() { }
 sample(char*str, int length) {
 name =new char[length+1];
 strcpy(name,str);
}
 sample ( const sample &other){
 	 int len= strlen(other.name);
 	name=new char[len+1];
 	strcpy(name,other.name);
 }
};
int main(int argc, char *argv[]) {
 sample user1((char *)"chitkara",8);
 sample user2 = user1;
 strcpy(user2.name, "dummy" );
 cout<<user2.name<<endl;
 cout<<user1.name<<endl;
 return 0;
}
