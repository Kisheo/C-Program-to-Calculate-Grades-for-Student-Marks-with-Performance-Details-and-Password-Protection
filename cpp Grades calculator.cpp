//Copyright © 2018 Kisheo Productions Studio (KPS)
#include <iostream>
using namespace std;

int gradeCalc()
	{

string pwd="pass123";
string input; 
cout<<" Copyright © 2018 Kisheo Productions Studio (KPS) \n\n\nEnter Your Password To Continue To the Private area." <<endl;
cin>>input;
while(input!=pwd){
	cout<<"Wrong Password. \n Please Try Again default pwd=(p a s s 1 2 3 without space)" <<endl;
	cin>>input;
	
	}
cout<<"Congratulations... \nYou are in."<<endl;

		
		
	int a;

	cout<<"Enter Your Marks\n";
cin>>a;

if(a>100){cout<<"Marks must be between 100 and 0"<<endl;
}
else if(a>=75){cout<<"You scored an A! \n";

}
else if(a>=60){cout<<"You scored B \n";
}
else if(a>=40){cout<<"You scored C \n";
}
else if(a>=20){cout<<"You scored D \n";
}
else if(a>=0){cout<<"You scored E \n";
}
else {cout<<"Marks must be between 100 and 0"<<endl;
}
return a;
}

int g = gradeCalc();

commCalc(){

if(g>100){cout<<""<<endl;
}
else if(g>=75){cout<<"Excellent! That was Very nice of you! \n";

}
else if(g>=60){cout<<"Very Good \n";
}
else if(g>=40){cout<<"Good \n";
}
else if(g>=20){cout<<"Pull up your socks buddy \n";
}
else if(g>=0){cout<<"Hey, That was the Worst thing you ever do! \n";
}
else {cout<<""<<endl;
}
return g;
}


int k=commCalc();

avChecker()
{
if(k>100){cout<<""<<endl;
}
else if(k>=50){cout<<"Congratulations! You are above average. \n";}
else if(k<50){cout<<"Besides you are below average. \n";}
else {cout<<""<<endl;
}
return k;
}
//Copyright © 2018 Kisheo Productions Studio (KPS)
int v=avChecker();

valueComm(){

if(v>100){cout<<""<<endl;
}
else if(v>=75){cout<<v <<" is one of the best marks ever scored \n";

}
else if(v>=60){cout<<v<<" is Good by the way \n";
}
else if(v>=40){cout<<v<<" is somehow good and easy for you to improve. \n";
}
else if(v>=20){cout<<v<<" is not that bad \n";
}
else if(v>=0){cout<<v<<" is one of the worst marks ever scored\n";
}
else {cout<<""<<endl;
}
cout<<"\n\n Copyright © 2018 Kisheo Productions Studio (KPS) \n\n";
return g;
}
//Copyright © 2018 Kisheo Productions Studio (KPS)
int main()
{

//	passWord();
//	commCalc();
	//gradeCalc();
	//avChecker();
	valueComm();
	return 1;
}

//Copyright © 2018 Kisheo Productions Studio (KPS)
      

