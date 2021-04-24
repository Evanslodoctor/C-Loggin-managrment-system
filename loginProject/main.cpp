#include <iostream>
#include <fstream>
#include <string>

int loggedIn()
{

	std::string username, password, un, pw;
 std::cout<<"Enter username: "; std::cin>>username;
std::cout<<"Enter password: "; std::cin>>password;


std::ifstream read;
      read.open("data.txt");
      if(read.fail());
std::getline(read,un);
std::getline(read,pw);
read.close();

if(un==username && pw==password)
    {
    	return 1;

    }
 else
    {
	 return 0;
    }


}

int main()
{
	int choice;
	std::cout<<"1: register \n 2: Login\n 3: Exit\n Enter your choice :";

	std::cin>>choice;
	if(choice==1)
	{
		std::string un, pw;
		std::cout<<"...............Registration of the new account..........."<<std::endl;
		std::cout<<"select username :";std::cin>>un;
	std::cout<<"select a password:";std::cin>>pw;
	std::ofstream file;
	file.open("data.txt");
	file<<un<<std::endl<<pw;
	file.close();
	main();
		}
		else if(choice==2)
		{
			bool status=loggedIn();

			if(!status)
			{
				std::cout<<"Wrong username or password."<<std::endl;
				main();
				return 0;
			}
			else
			{
				std::cout<<"succesfully login."<<std::endl;

				main();
				return 1;

			}
		}


}
