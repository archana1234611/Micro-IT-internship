#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
using namespace std;
struct student
{
    char nam[20],rollno[20];
    int marks,random;
};
student st;
void cppp(){
    int i=0,arr[6]={-1,-1,-1,-1,-1,-1};
    st.marks=0;
    char choice;
    while(i<5){
        back:
        st.random=rand()%7;
        for(int j=0;j<6;j++){
        if(st.random==arr[j]){
            goto back;
        }
      }
   arr[i]=st.random;
   switch(st.random)
   {
    case 0:
      cout<<i+1<<")What is a correct syntax to output\"Hello World\"in c++ ?"<<endl;

      cout<<"A. System.out.println(\"Hello World\");"<<endl;
      cout<<"B. Console.WriteLine(\"Hello World\");"<<endl;
      cout<<"C. print(\"Hello World\");"<<endl;
      cout<<"D. cout<<\"Hello World\";"<<endl;

      cin>>choice;
      if(choice=='D'||choice=='d'){
        cout<<choice<<"is correct Answer"<<endl<<endl;
        st.marks++;
      }
      else{
        cout<<choice<<"is incorrect Answer"<<endl;

        cout<<"The correct answer is d"<<endl<<endl;
      }
      break;
    case 1:
      cout<<i+1<<")Which of the following is called address operator ?"<<endl;

      cout<<"a) *"<<endl;
      cout<<"b) &"<<endl;
      cout<<"c) _"<<endl;
      cout<<"d) %"<<endl;

      cin>>choice;
      if(choice=='B'||choice=='b'){
        cout<<choice<<"is correct Answer"<<endl;
        st.marks++;
      }
      else{
        cout<<choice<<"is incorrect answer"<<endl;
        cout<<"The correct answer is B"<<endl<<endl;
      }
      break;
    case 2:
       cout<<i+1<<")Which of the following is used for comments in c++ ?"<<endl;

       cout<<"a)//comment"<<endl;
       cout<<"b)/*comment*/"<<endl;
       cout<<"c)both //comment or /*comment*/"<<endl;
       cout<<"d)//comment*/"<<endl;

       cin>>choice;
       if(choice=='C'||choice=='c'){
         cout<<choice<<"is correct Answer"<<endl<<endl;
         st.marks++;
       }
      else{
        cout<<choice<<"is incorrect Answer"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;
      }
      break;
    case 3:
       cout<<i+1<<")Who created C++ ?"<<endl;

       cout<<"a)Bjarne Stroustrup"<<endl;
       cout<<"b)Dennis Ritchie"<<endl;
       cout<<"c)Ken Thompson"<<endl;
       cout<<"d)Brian Kernighan"<<endl;

       cin>>choice;
       if(choice=='A'||choice=='a'){
        cout<<choice<<"is correct Answer"<<endl<<endl;
        st.marks++;
       }
       else{
        cout<<choice<<"is incorrect Answer"<<endl;
        cout<<"The correct answer is a"<<endl<<endl;
       }
       break;

    case 4:
       cout<<i+1<<")A language which has the capability to generate new data types are called"<<endl;

       cout<<"a)Extensible"<<endl;
       cout<<"b)Overloaded"<<endl;
       cout<<"c)Encapsulated"<<endl;
       cout<<"d)Reprehensible"<<endl;

       cin>>choice;
       if(choice=='A'||choice=='a'){
        cout<<choice<<"is correct Answer"<<endl<<endl;
        st.marks++;
       }
       else{
        cout<<choice<<"is incorrect Answer"<<endl;
        cout<<"The correct answer is a"<<endl<<endl;
       }
       break;
    case 5:
      cout<<i+1<<")Which of the following is called insertion/put to operator?"<<endl;

      cout<<"a)<"<<endl;
      cout<<"b)>"<<endl;
      cout<<"c)<<"<<endl;
      cout<<"d)>>"<<endl;

      cin>>choice;
      if(choice=='C'||choice=='c'){
        cout<<choice<<"is correct Answer"<<endl<<endl;
        st.marks++;
      }
      else{
        cout<<"The correct answer is c"<<endl;
      }
      break;
    case 6:

      cout<<i+1<<")Which of the following is called extraction/get from operator?"<<endl;

      cout<<"a)<"<<endl;
      cout<<"b)>"<<endl;
      cout<<"c)<<"<<endl;
      cout<<"d)>>"<<endl;

      cin>>choice;
      if(choice=='d'||choice=='D'){
        cout<<choice<<"is correct Answer"<<endl<<endl;
        st.marks++;
      }
      else{
        cout<<choice<<"is incorrect Answer"<<endl;
        cout<<"The correct answer is d"<<endl<<endl;
      }
      break;
    }
    i++;
  }
}
void java(){
int i = 0;
    st.marks = 0;
    char choice;
    while (i < 5) {
        switch (i) {
        case 0:
            cout << i + 1 << ") Which company developed Java?" << endl;
            cout << "a) Microsoft" << endl;
            cout << "b) Sun Microsystems" << endl;
            cout << "c) Apple" << endl;
            cout << "d) Oracle" << endl;
            cin >> choice;
            if (choice == 'B' || choice == 'b') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is b" << endl << endl;
            }
            break;
        case 1:
            cout << i + 1 << ") What is the extension of Java bytecode files?" << endl;
            cout << "a) .java" << endl;
            cout << "b) .class" << endl;
            cout << "c) .js" << endl;
            cout << "d) .byte" << endl;
            cin >> choice;
            if (choice == 'B' || choice == 'b') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is b" << endl << endl;
            }
            break;
        case 2:
            cout << i + 1 << ") Which keyword is used to inherit a class in Java?" << endl;
            cout << "a) implements" << endl;
            cout << "b) inherits" << endl;
            cout << "c) extends" << endl;
            cout << "d) override" << endl;
            cin >> choice;
            if (choice == 'C' || choice == 'c') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is c" << endl << endl;
            }
            break;
        case 3:
            cout << i + 1 << ") Which method is the entry point of Java program?" << endl;
            cout << "a) main()" << endl;
            cout << "b) start()" << endl;
            cout << "c) run()" << endl;
            cout << "d) init()" << endl;
            cin >> choice;
            if (choice == 'A' || choice == 'a') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is a" << endl << endl;
            }
            break;
        case 4:
            cout << i + 1 << ") Java is a ___ language." << endl;
            cout << "a) Procedural" << endl;
            cout << "b) Functional" << endl;
            cout << "c) Object-Oriented" << endl;
            cout << "d) Scripting" << endl;
            cin >> choice;
            if (choice == 'C' || choice == 'c') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is c" << endl << endl;
            }
            break;
        }
        i++;
    }
}
void html(){
int i = 0;
    st.marks = 0;
    char choice;
    while (i < 5) {
        switch (i) {
        case 0:
            cout << i + 1 << ") What does HTML stand for?" << endl;
            cout << "a) Hyper Text Markup Language" << endl;
            cout << "b) Home Tool Markup Language" << endl;
            cout << "c) Hyperlinks Text Mark Language" << endl;
            cout << "d) Hyperlinking Text Management Language" << endl;
            cin >> choice;
            if (choice == 'A' || choice == 'a') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is a" << endl << endl;
            }
            break;
        case 1:
            cout << i + 1 << ") Choose the correct HTML tag for the largest heading." << endl;
            cout << "a) <heading>" << endl;
            cout << "b) <h6>" << endl;
            cout << "c) <h1>" << endl;
            cout << "d) <head>" << endl;
            cin >> choice;
            if (choice == 'C' || choice == 'c') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is c" << endl << endl;
            }
            break;
        case 2:
            cout << i + 1 << ") What is the correct HTML tag for inserting a line break?" << endl;
            cout << "a) <break>" << endl;
            cout << "b) <lb>" << endl;
            cout << "c) <br>" << endl;
            cout << "d) <b>" << endl;
            cin >> choice;
            if (choice == 'C' || choice == 'c') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is c" << endl << endl;
            }
            break;
        case 3:
            cout << i + 1 << ") Which tag is used to create a hyperlink?" << endl;
            cout << "a) <a>" << endl;
            cout << "b) <link>" << endl;
            cout << "c) <href>" << endl;
            cout << "d) <hyperlink>" << endl;
            cin >> choice;
            if (choice == 'A' || choice == 'a') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is a" << endl << endl;
            }
            break;
        case 4:
            cout << i + 1 << ") HTML files are saved by default with the extension?" << endl;
            cout << "a) .html" << endl;
            cout << "b) .ht" << endl;
            cout << "c) .hml" << endl;
            cout << "d) .h" << endl;
            cin >> choice;
            if (choice == 'A' || choice == 'a') {
                cout << choice << " is correct Answer" << endl << endl;
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer" << endl;
                cout << "The correct answer is a" << endl << endl;
            }
            break;
        }
        i++;
    }
}

void result(){
  float percentage=0;
  cout<<"Student Name:"<<st.nam<<endl;
  cout<<"Roll no.:"<<st.rollno<<endl;
  cout<<"Marks:"<<st.marks<<"out of 5"<<endl;
  percentage=100.0f*st.marks/5;
  cout<<"Percentage:"<<percentage<<"%"<<endl;
  if(percentage>=50){
    cout<<"Status:Pass"<<endl;
  }
  else{
    cout<<"Status:Fail"<<endl;
  }
}
int main(){
  char press,select;
  do
  {
    cout<<"\n\n\t\t****************"<<endl;
    cout<<"\t\t QUIZ SYSTEM"<<endl;
    cout<<"\t\t****************"<<endl;
    cout<<"\t\tEnter name:";
    cin.getline(st.nam,20);
    cout<<"\t\tEnter rollno:";
    cin.getline(st.rollno,20);
    system("CLS");
    cout<<"\t\tMarks less than 50% will be fail"<<endl;
    cout<<"\n\nSelect option which subject's quiz you want to perform" <<endl;
    cout<<"1)C++"<<endl;
    cout<<"2)Java"<<endl;
    cout<<"3)Html"<<endl;
    select=getch();
    system("CLS");
    switch(select){

    case'1':
      cout<<"\t\tC++ Quiz"<<endl;
      cppp();
      system("CLS");
      cout<<"\t\tC++ Quiz Result"<<endl;
      result();
      break; 
    case'2':
      cout<<"\t\tJava Quiz"<<endl;
      java();
      system("CLS");
      cout<<"\t\tJava Quiz Result"<<endl;
      result();
      break;
    case'3':
      cout<<"\t\tHtml Quiz"<<endl;
      html();
      system("CLS");
      cout<<"\t\tHtml Quiz Result"<<endl;
      result();
      break;
    default:
      cout<<"Invalid input"<<endl;
      break;
    }
     cout<<"Press y if you want to continue or any to terminate"<<endl;
     press=getch();
     system("CLS");
    }
    while(press=='y'||press=='Y');
  return 0;
}