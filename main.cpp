# include <iostream>
using namespace std;

class Parent 
{
	int salary;
	protected:
		int p_age;
	public:
		string p_fname = "Mohit";
	
		void setP_fname(string f)
		{
			p_fname = f;
		}

		void setP_age(int ag)
  		{
    		p_age = ag;
  		}	


		void setsalary(int s)
    	{
      		salary =s;
    	}

		string getp_Fname()
		{
			return p_fname;
		}
    
		int getP_age()
		{
			return p_age;
		}

		int getSalary()
		{
			return salary;
		}

};

class Child: public Parent //inherit
{
	public:
		string c_fname = "Carry";
		int c_age = 17;    
  

		void setC_Age(int a)
		{
			c_age = a;
		}

		int getC_Age()
		{
			return c_age;
		}
  
		void setC_fname(string f)
		{
			c_fname=f;
		}
		
		string getC_fname()
  		{
    		return c_fname;
  		}
};


int main()
{
	Child c;

	c.setP_fname("Carry");
	c.setP_age(45);
  	c.setsalary(60000);
  
  	c.setC_fname("Mohit");
    c.setC_Age(20);  

	cout <<"Parent's Name is "<< c.getp_Fname()<<endl;	
	cout <<"Parent's Age is "<< c.getP_age()  <<endl;
	cout <<"Parent's Salary is "<< c.getSalary()  <<endl;
	cout <<"Child's Name is "<< c.getC_fname()<<endl;
	cout <<"Child's Age is "<< c.getC_Age()<<endl;


	return 0;
}
