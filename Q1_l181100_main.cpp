#include"header.h"
int main()
{
	student s1,std;
	s1.setgpa(3);
	s1.addquizscore(8);
	s1.addquizscore(6);
	s1.addquizscore(13);
	s1.print();

	student s2(2,4);
	s2.addquizscore(8);
	s2.addquizscore(6);
	s2.addquizscore(13);
	s2.print();

	student s3(s1);////copy constructor will be invoked///
	s3.updatescore(2,4);
	s3.updatescore(4,7);
	s2.compare(s1);////here copy contsructor will be frist invoke then compare function will be invoked.///
	s3.print();

	_getch();
}
////////////destructor First will be invoked for s3 then for s2 then for s1 .///////
