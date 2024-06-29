#include<iostream>
using namespace std;
int main()
{ int numofsub, choice, sum=0, percentage=0,gpa=0,cgpa=0,flag=0;
int marks[numofsub];
cout<<"Enter number of subjects"<<endl;
cin>>numofsub;
cout<<"Enter marks in each subject"<<endl;
for(int i=0; i<numofsub; i++)
{ cin>>marks[i];
}
cout<<"1. Percentage"<<endl;
cout<<"2. gpa in each subject"<<endl;
cout<<"3. cgpa"<<endl;
cout<<"4. cgpa percentage"<<endl;
cout<<"5. No of subjects in which the student failed"<<endl;
cout<<"6. Check whether the student is promoted to the next semester or not"<<endl;
cout<<"Please enter your choice"<<endl;
cin>>choice;
switch(choice)
{
case 1: for(int i=0;i<numofsub;i++)
        { sum = sum+marks[numofsub];
          percentage = (sum/(numofsub*100))*100;
          cout<<"Stuednt's percentage ="<<percentage<<endl;
        }
        break;
case 2: for(int i=0; i<numofsub;i++)
        { gpa = marks[numofsub]/10;
          cout<<"gpa="<<gpa<<endl;
        }
        break;
case 3: for(int i=0;i<numofsub;i++)
        { gpa = marks[numofsub]/10;
          sum = sum+gpa;
        }
        cgpa = sum/numofsub ;
        cout<<"cgpa = "<<cgpa<<endl;
        break;
case 4: for(int i=0;i<numofsub;i++)
        { gpa = marks[numofsub]/10;
          sum = sum+gpa;
        }
        cgpa = sum/numofsub * 9.5;
        cout<<"cgpa percentage = "<<cgpa<<endl;
        break;
case 5: for(int i =0;i<numofsub;i++)
        { if(marks[i]<45)
          { flag++;
          }
        }
        if(flag==0)
        {cout<<"Student has passed in all subjects "<<endl;
        }
        else
        {cout<<"No of subjects in which the student failed="<<flag<<endl;
        }
        break;
case 6: for(int i =0;i<numofsub;i++)
        { if(marks[i]<45)
          { flag++;
          }
        }
        if(flag>(numofsub/2))
        {cout<<"Student will not be promoted to the next semester"<<endl;
        }
        else
        {cout<<"Student will be promoted to the next semester"<<endl;
        }
        break;
    default : cout<<"Please enter the correct choice"<<endl;
}
}
