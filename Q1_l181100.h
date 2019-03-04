#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private : 
	static int counter;
	int id;
	float *quizscore;
	float gpa;
	int quizcapacity,quiztaken;
	int k;
public:
	student();
	student(int , float);
	student(const student &);
	~student();
	void addquizscore(int score);
	void setgpa(float);
	float getgpa()const;
	void print()const;
	bool compare(student std);
	void updatescore(int x, int y);
};
