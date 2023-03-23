#include<iostream>

using namespace std;

int sum(int a, int b){
		return a+b;
	}
 	
	 int sub(int a, int b){
		return a-b;
	}
	 int div(int a, int b){
		return a/b;
	}	
	 int mult(int a, int b){
		return a*b;
	}
	 int mod(int a, int b){
		return a%b;
	}


int main(){
	
 
	
	int n,m,result;
	char q;
		up:
	cout<<"enter you value 1 : ";
	cin>>m;
	
	cout<<"select operator : +,-,/,*,% : ";
	cin>>q;
	
	cout<<"enter you value 2 : ";
	cin>>n;
	
	
	
	switch(q){
		
		case '+':
			result = sum(m,n);
			break;
			
		case '-':
			result = sub(m,n);
			break;
			
		case '/':
			result = div(m,n);
			break;
			
		case '*':
			result = mult(m,n);
			break;
			
		case '%':
			result = mod(m,n);
			break;
			
	}
	
	cout<<m<<" "<<q<<" "<<n<<" = "<<result<<endl<<endl;
	
	goto up;
	
	return 0;
}
