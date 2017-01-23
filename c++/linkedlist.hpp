//
//  linkedlist.hpp
//  
//
//  Created by Jose Salazar on 1/22/17.
//
//

//linkedlist.hpp

#include "main.hpp"
#include <iostream>
using namespace std;

class voter
{
private:
    int voterID;
    string voterName;
    bool voted;
    voter *next;
public:
    voter(int id,string vn, bool vs)
    {
        voterID=id;
        voterName=vn;
        voted=vs;
    }
    void ModID(int newID){voterID=newID;};
    void ModName(string newN){voterName=newN;};
    /*void ModExp(){
        int newE;
        string dateCat[3]={"Month:", "Day: ", "Year: "};
        for(int x=0; x < 3; x++){
            cout << "Please enter " << dateCat[x];
            cin >> newE;
            expiration[x]=newE;
        }
    };*/
    void ModHasVoted(bool newS){voted=newS;};
    
    /*Public Data Pulls*/
    int Pull_ID(){return voterID;};
    
    string Pull_Name(){return voterName;};
    
    /*void Pull_Exp(){
        cout << "Expiration Date: " << expiration[0] << "/" << expiration[1] << "/" <<expiration[2] << endl;
    };*/
    
    bool Pull_HasVoted(){return voted;};
    
    void ModNext(voter *n){ next = n; }
    
    voter *Pull_Next(){ return next;}

};



class voters
{
private:
    int cnt;
    voter *top;
    voter *bottom;
public:
    voters()
    {
        cnt = 0;
        top = bottom = NULL;
    }
    ~voters()
    {
        voter * now = top;
        while (now != bottom)
        {
            voter * next = now->Pull_Next();
            delete now;
            now = next;
        }
    }
    void addvoter()
    {
        string vn;
        int id;
        voter *temp, *temp2;
        temp2 = top;
        bool validator=false;
        bool vs;

        
        
        cout << "Please enter an ID: ";
        cin >> id;
        cout << endl;
        cout << "Please enter an name: ";
        cin >> vn;
        voter *now = top;
            
        while (now != NULL) //while the list isn't empty
        {

            now = now->Pull_Next(); // this fvmction gets the next member of memory in the stack.

                
        }
            
        temp = new voter(id, vn, vs);
        if (cnt == 0)
        {
            top = bottom = temp;
            temp->ModNext(NULL);
            cnt++;
        }
        else
        {
            bottom->ModNext(temp);
            bottom = temp;
            temp->ModNext(NULL);
            cnt++;
        }

    }
    
    void printList()
    {
        cout << endl;
        cout << endl << endl;
        voter *now = top;
        
        //cout << "\tVOTER ID\tNAME\tTEAM" << endl;
        
        while (now != NULL)
        {
            cout << "\t";
            cout << now->Pull_ID();
            cout << "\t";
            cout << now->Pull_Name();
            cout << "\tUNASSIGNED";
            cout << endl;
            now = now->Pull_Next();
            
        }
        if (now == NULL)
        {
            cout << endl << endl;
            return;
        }
        
    }

};
