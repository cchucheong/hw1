#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int main(int argc, char *argv[])
{

   ifstream myfile(argv[1]);

   if (myfile.fail() ) {
       cout << "Error opening file" <<endl;
       return -1;
      }

    int total_lines, counter;
    string currentline, checker;
    myfile>> total_lines;

    int *backpedal = new int[total_lines ];
    getline(myfile, currentline);

    for(int i = 0; i < total_lines ; i++)
      {
       getline(myfile, currentline);
       stringstream ss(currentline);
       counter = 0;
        do
	 {  
           ss >> checker; 

	   if(ss.fail())
	    break;
          
           counter++;
         }
        while( !ss.fail());

      backpedal[i] = counter;       
      }

    for (int j = total_lines -1; j >= 0; j--)
     {
       cout<< backpedal[j] << endl;
     }
   delete[] backpedal;
   return 0;
}
