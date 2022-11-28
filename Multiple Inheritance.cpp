#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Musculine {
	public:
		int wight;
		string typemale;
		void Muscle(){
			cout<<"Enter the Musculine property"<<endl;
			cout<<"Enter the wieght"<<endl;
			cin>>wight;
			cout<<"Enter the type of male"<<endl;
			cin>>typemale;
		}
};
class Intelligent{
	public:
		int iq;
		string degree;
		void Intelli(){
			cout<<"Enter the IQ level"<<endl;
			cin>>iq;
			cout<<"Enter the Degree "<<endl;
			cin>>degree;
		}
};
class Richness{
	public:
		string networth;
		string network;
		void rich(){
			cout<<"Enter the Networth "<<endl;
			cin>>networth;
			cout<<"Enter the Network"<<endl;
			cin>>network;
		}
};
class Son : public Musculine, public Intelligent, public Richness {
	public :
		string sname;
		int age;
		void soninfo(){			
			cout<<"Name is "<<endl;
			cin>>sname;
			cout<<"Inside the function"<<endl;
			cout<<"Age is "<<endl;
			cin>>age;
		}
		void fullinfo(){
			cout<<"Name is "<<sname<<" age is "<<age<<" Wieght is "<<wight<<" type of male "<<typemale;
			cout<<" IQ is "<<iq<<" Degree is "<<degree<<" Networth is "<<networth<<" Network is "<<network<<endl;
		}
};
int main(){
	Son s;
	s.Muscle();
	s.Intelli();
	s.rich();
	s.soninfo();
	s.fullinfo();
	return 0;
}
