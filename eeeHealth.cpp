#include<bits/stdc++.h>
using namespace std;

class Hospitals
{
private:
    string hospitalName;
    string hospitalAddress;
    string doctorsList[10000];
    string doctorSpeciality[10000];
    int visitingFee[10000];
    int id=0;
public:

     Hospitals(string hospitalName,string hospitalAddress){

         this-> hospitalName= hospitalName;
         this-> hospitalAddress = hospitalAddress;
         cout<<hospitalName<<endl;
      cout<<hospitalAddress<<endl;

         doctorsList[0] = "Tanvir Hasan ";
        doctorSpeciality[0]="Psychiatrist";
        visitingFee[0]=500;
        doctorsList[1] = "Md. Zakariya";
        doctorSpeciality[1]="Urologist";
        visitingFee[1]=500;
        doctorsList[2] = "Kamal khan";
        doctorSpeciality[2]="Neurologist";
        visitingFee[2]=1000;
        doctorsList[3] = "Rahima Parvin";
        doctorSpeciality[3]="Orthopedic Surgeon";
        visitingFee[4]=800;
        doctorsList[4] = "Shahina Begum";
        doctorSpeciality[4]="Dermatologist";
        visitingFee[4]=1000;

        for (int i=0; i<5; i++)
        {
            cout << i+1<<"." <<"Doctor: "<<doctorsList[i]<<endl;
            cout <<"Doctor's Speciality: "<<doctorSpeciality[i]<<endl;
            cout <<"Visiting Fee: "<<visitingFee[i]<<endl;
            cout<<endl;
        }


     }

    void addDoctor(string doctorName, string speciality, int fee)
    {
    doctorsList[id] = doctorName;
    doctorSpeciality[id] = speciality;
    visitingFee[id] = fee;
    id++;
    }


    void showDoctorsList()
    {



        for(int i=0; i<id; i++){
             cout<<i+1<<"."<<"Doctor Name:"<<doctorsList[i]<<endl;
             cout<<"Doctor's Speciality:"<<doctorSpeciality[i]<<endl;
             cout<<"Visiting Fee:"<<visitingFee[i]<<endl;
             cout<<endl;
        }
    }
};


int main()
{
    Hospitals Popular("Popular Diagnostic Center,","Mirpur 10");
    Popular.addDoctor("Mirazul Islam","Cardiologist",800);
    Popular.addDoctor("Anika Haque","Cardiologist",800);
    Popular.showDoctorsList();

    return 0;
}


