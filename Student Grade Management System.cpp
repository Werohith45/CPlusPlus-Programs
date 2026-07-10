#include <iostream>
#include <string> 
using namespace std;

int main() 
{
    int maxExamMarks, id, Standerd,Attandance;
    double Tamil, English, Maths, Physics, Chemistry, ComputerScience, Total, Average, Percent;
    string Name,Section;
    int passedcount=0;
    int failedcount=0;
    double passmark=0.0;

    cout << "How Many Marks was your Exam out of per subject? (Type 100 or 50): ";
    cin >> maxExamMarks;
   if (maxExamMarks==100)
   {
    passmark=35;
   }
   else
   {
    passmark=18;
   }
cin.ignore();

    cout << "\n====== STUDENT DETAIL SECTION ======\n";
    cout << "\n Enter your Name: ";
    getline(cin>>ws, Name);
    cout << "\n Enter your school Id: ";
    cin >> id;
    cout << "\n Enter Your standard: ";
    cin >> Standerd;
    cout<<"\n Enter Which Section Are you studing: ";
    cin>> Section;
    cout <<"\n Enter your Attandance Prcent:";
    cin>>Attandance;

    cout << "\n====== STUDENT MARK SECTION ======\n";
    do
     {
    cout << "Enter Your Tamil Mark: ";
    cin >> Tamil;
    //while (Tamil < 0 || Tamil > maxExamMarks);
     } while (Tamil < 0 || Tamil > maxExamMarks);
     do 
     {
    cout << "Enter Your English Mark: "; 
    cin >> English;
    //while (English < 0 || English > maxExamMarks);
     }  while (English < 0 || English > maxExamMarks);
     do 
     {
    cout << "Enter Your Maths Mark: "; 
    cin >> Maths;
  //  while (Maths < 0 || Maths > maxExamMarks);
     }   while (Maths < 0 || Maths > maxExamMarks);
     do 
     {
    cout << "Enter Your Physics Mark: "; 
    cin >> Physics;
   // while (Physics < 0 || Physics > maxExamMarks);
     }  while (Physics < 0 || Physics > maxExamMarks);
     do 
     {
    cout << "Enter Your Chemistry Mark: "; 
    cin >> Chemistry;
     //while (Chemistry < 0 || Chemistry > maxExamMarks);
     }   while (Chemistry < 0 || Chemistry > maxExamMarks);
     do 
     {
    cout << "Enter Your Computer Science Mark: "; 
    cin >> ComputerScience;
    //while (ComputerScience < 0 || ComputerScience > maxExamMarks);
     }  while (ComputerScience < 0 || ComputerScience > maxExamMarks);
    if (Tamil >= passmark) passedcount++;
     else failedcount++;
    if (English >= passmark) passedcount++; 
    else failedcount++;
    if (Maths >= passmark) passedcount++; 
    else failedcount++;
    if (Physics >= passmark) passedcount++;
     else failedcount++;
    if (Chemistry >= passmark) passedcount++;
     else failedcount++;
    if (ComputerScience >= passmark) passedcount++; 
    else failedcount++;

    cout << "\n====== STUDENT RESULT SECTION ======\n";
    Total = Tamil + English + Maths + Physics + Chemistry + ComputerScience;
    Average = Total / 6;

    

    double totalPossibleMarks = maxExamMarks * 6; 
    Percent = (Total / totalPossibleMarks) * 100;

    cout << "Your Total is: " << Total << " / " << totalPossibleMarks << "\n";
    cout << "Your Average is: " << Average << "\n";
    cout << "Your Percent is: " << Percent << "%\n";

    cout << "Subjects Passed: " << passedcount << "\n";
    cout << "Subjects Failed: " << failedcount << "\n";

    if (Percent>=90)
    cout<<"\n Excellent Performance Keep it up and Your eligible for scholarship ";
    else if (Percent>=80)
    cout <<"\n Good Keep it UP Increase in Next Exam and Your eligible for scholarship";
    else if (Percent>=70)
    cout <<"\n Good Keep it UP Increase in Next Exam";
    else if (Percent>=60)
    cout <<"\n Good Keep it UP Increase in Next Exam";
    else if (Percent>=50)
    cout <<"\n it's ok Increase in Next Exam";
    else 
    cout <<"\n Imporvement Needed Must Study Well";

    int gradeCategory = Percent / 10; 

    switch(gradeCategory) 
    {
        case 10:
        case 9:
            cout << "Grade: A+";
            break;
        case 8:
            cout << "Grade: A";
            break;
        case 7:
            cout << "Grade: B";
            break;
        case 6:
            cout << "Grade: C";
            break;
        case 5:
            cout << "Grade: D";
            break;
        case 4:
            cout << "Grade: E";
            break;
        default:
            cout << "Grade: F (Sorry, You Failed in This Exam)";
            break;
    }
    


    return 0;
}
