#include<iostream>
#include<string>
using namespace std;

int i;

class student
    {
        public:
            string Name;
            int marks;  //out of 500
            float percent ; 
            string grade;

            void grd()
                {
                    if(percent>=90)
                        {
                            grade="A";
                        }
                    else if(percent >= 80)
                        {
                            grade="B";
                        }
                    else if(percent>=70)
                        {
                            grade="C";
                        }
                    else
                        {
                            grade="D";
                        }
                }

            void inp(int student_no)
                {
                    cout<<"\n Student [ "
                        <<student_no
                        <<" ] : \n"
                        <<"\n 1. Name => ";
                    cin>>Name;

                    cout<<"\n 2. Total Marks => ";
                    cin>>marks;

                    percent = marks /5.0;

                    grd();
                }
    };

int main()
    {   
        student s[5];
        
        int high=-1,high_idx=-1;
        int stop=0;

        cout<<"\n Enter the details of .....";

        for(i = 0 ; i < 5;i++)
            {
                s[i].inp(i+1);

                while(s[i].marks > 500 || s[i].marks < 0)
                        {
                            cout<<"Enter the Total marks less than 500 "
                                <<"\n Enter Marks => ";
                            cin>>s[i].marks;
                            s[i].percent = s[i].marks /5.0;
                            s[i].grd();
                        }
            }

        for(i = 0 ; i < 5;i++)
            {
                if(s[i].marks > high)
                    {
                        high=s[i].marks;
                        high_idx ++;
                    }
            }

        cout<<"\n|           NAME         | Percent | ";
        for(i = 0 ; i < 5;i++)
            {
                cout<<"\n|"
                    <<s[i].Name
                    <<" | "
                    <<s[i].percent
                    <<"|\n";
            }
        
        cout<<"\n\nHighest Score => "
            <<s[high_idx].Name
            <<" [ "
            <<s[high_idx].percent
            <<" % ] { "
            <<s[i].grade
            <<" }";

        return 0;

    }