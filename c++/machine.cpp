//
//  machine.cpp
//  
//
//  Created by Jose Salazar on 1/22/17.
//
//

#include "main.hpp"


class voterDEMO
{
private:
    int voterID;
    string voterName;
    int expiration[3];
    bool hasVoted;
    
public:
    //Public Modification Functions
    void ModID(int newID){voterID=newID;};
    void ModName(string newN){voterName=newN;};
    void ModExp(){
        int newE;
        string dateCat[3]={"Month:", "Day: ", "Year: "};
        for(int x=0; x < 3; x++){
            cout << "Please enter " << dateCat[x];
            cin >> newE;
            expiration[x]=newE;
        }
        };
    void ModHasVoted(bool newS){hasVoted=newS;};
    
    //Public Data Pulls
    void Pull_ID(){cout << "Voter ID#: " << voterID << endl;};
    
    void Pull_Name(){cout << "Voter Name: " << voterName << endl;};
    
    void Pull_Exp(){
        cout << "Expiration Date: " << expiration[0] << "/" << expiration[1] << "/" <<expiration[2] << endl;
    };
    
    void Pull_HasVoted(){cout << "Already Voted: "<< hasVoted <<endl;};
};
