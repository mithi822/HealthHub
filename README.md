#include<bits/stdc++.h>
#include <stdlib.h>

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
    Hospitals(){};
     Hospitals(string hospitalName,string hospitalAddress){

         this-> hospitalName= hospitalName;
         this-> hospitalAddress = hospitalAddress;


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
        id=5;
/*
        for (int i=0; i<5; i++)
        {
            cout << i+1<<"." <<"Doctor: "<<doctorsList[i]<<endl;
            cout <<"Doctor's Speciality: "<<doctorSpeciality[i]<<endl;
            cout <<"Visiting Fee: "<<visitingFee[i]<<endl;
            cout<<endl;
        }
*/

     }
     string getHospitalName()
     {

     return hospitalName;

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
    //Hospitals* Hospital= new Hospitals[3];
    Hospitals Hospital[3];

    Hospital[0]= Hospitals("Popular Diagnostic Center,","Mirpur 10");
    Hospital[1]= Hospitals("Azmol Hospital,","Mirpur 10");
    Hospital[2]= Hospitals("Alok Diagonostic Center,","Mirpur 10");

    //cout<< Hospital[1].getHospitalName();
    //Hospital[1].showDoctorsList();

    while(1){
        for(int i=0;i<3;i++){
            cout<<i+1<<". " <<Hospital[i].getHospitalName()<<'\n';
        }
        cout<< "enter the hopital number you want to check:\n";
        int a;
        cin>>a;
        Hospital[a-1].showDoctorsList();
        //clrscr();
        system("cls");
        //break;
    }

    //Hospital[2].showDoctorsList();
    /*
    for(int i=0;i<3;i++){
        Hospital[i]= Hospitals("Popular Diagnostic Center,","Mirpur 10");
    }*/
    /*
    Hospitals Popular("Popular Diagnostic Center,","Mirpur 10");
    Popular.addDoctor("Mirazul Islam","Cardiologist",800);
    Popular.addDoctor("Anika Haque","Cardiologist",800);
    Popular.showDoctorsList();
    while(true){
        for(int i=0;i<3;i++){
            cout<< i+1<< ". "<<
        }
    }
    */

    return 0;
}


