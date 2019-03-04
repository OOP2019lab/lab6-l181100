#include"header.h"
int student :: counter = 0;
student :: student()
{
	counter++;
	id=counter;
	quizscore = nullptr;
	quizcapacity = 3;
	quiztaken = 0;
	gpa = 0;
	quizscore = new float[quizcapacity];
    k=0;
}
student :: student(int  quizcapacity_1,float gpa_1)
{
	counter++;
	quiztaken = 0;
	id=counter;
	gpa = gpa_1;
	quizcapacity =  quizcapacity_1;
	quizscore = new float[quizcapacity];
	k=0;

}
void student ::  setgpa(float gpa_2)
{
	gpa = gpa_2;
}
float student :: getgpa()const
{
		return gpa;
}
void student :: addquizscore(int score)
{
	if(quizscore!=nullptr)
	{
	if(quiztaken < quizcapacity)
	{
		quizscore[quiztaken] = score;
		quiztaken++;
	}
	
	else
		k=1;
	}


}
void student :: print()const
{
	cout<<"id of student : "<<id<<endl;
	cout<<"gpa of student : "<<gpa<<endl;
	cout<<"total number of quiz taken : "<<quiztaken<<endl;
	for(int i=0;i<quizcapacity;i++)
		cout<<"quiz "<<i+1<<" score : "<<quizscore[i]<<endl;
	if(k==1)
		cout<<"Not Enough Space\n";
	cout<<endl;
	
								
}
student :: student(const student &buff)
{
	id = buff.id;
	gpa = buff.gpa;
	quiztaken = buff.quiztaken;
	quizcapacity = buff.quizcapacity;
	quizscore = new float[quizcapacity];
	for(int i=0;i<quizcapacity;i++)
	{
		quizscore[i] = buff.quizscore[i];
	}
	cout<<"Copy Constructor is invoked \n";
}
bool student :: compare(student std)
{
	bool check = true;
	if(gpa>std.gpa)
	{
		return true;
		cout<<endl;
	}
	else
		return false;
	return check;
}
void student :: updatescore(int x,int y)
{
	if(x<=quiztaken)
		quizscore[x-1] = y;
	else
		cout<<"quiz number "<<x<<" not taken\n";
}
student :: ~student()
{
	if(quizscore != nullptr)
	{
		delete[]quizscore;
		cout<<"destructor is invuked \n";
	}
}