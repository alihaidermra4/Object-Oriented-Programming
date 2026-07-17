#include<iostream>
using namespace std;

class GradeChecker;          // Forward declaration
void evaluate(GradeChecker *g);

class GradeChecker{
	private:
		string name;
		int marks;
	
	public:
		GradeChecker(string s = "Unknown", int m=0){
			name = s;
			marks = m;
		}
		
		void setName(string n){
			name = n;
		}
		
		void setMarks(int m){
			marks = m;
		}
		
		string getname(){
			return name;
		}
		
		int getmarks(){
			return marks;
		}
		
		void checkStatus(){
			evaluate(this);
		}
		
};

void evaluate(GradeChecker *g){
	if (g->getmarks()>59){
		cout<<"\n"<<g->getname()<<" passed in this semester\n";
	}
	else{
		cout<<g->getname()<<" has failed";
	}
	
}

int main(){
	GradeChecker s1;
	s1.setName("Mahad");
	s1.setMarks(59);
	s1.checkStatus();
	
}