// Ëàáîðàòîðíàÿ ðàáîòà 1. Âàðèàíò 2.
#include<conio.h>
#include<iostream.h>
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void min_index(int *mass, int razm);
void max_index(int *mass, int razm);
void srvn_mass(int *mass,int *mass_2 ,int razm);
void vivod_3_max(int *mass, int razm);
void max_posled(int *mass, int razm);
void pr_vibor(int *mass, int razm);

int _tmain(int argc, _TCHAR* argv[])
{
setlocale(LC_ALL, "russian");

cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ ìàññèâà" << endl;
	int razm;
    cin >> razm;
	if(razm < 3){
	
	cout << "Âû ââåëè íåêîðåêòíîå çíà÷åíèå.\nÈëè äëèíà ìàññèâà < 3 ýëåìåíòîâ \nÏðîãðàììà çàâåðøàåò ðàáîòó." << endl;
	system("pause");
	return -1;
	    }

    int *mass = new int[razm];
    int *mass_2 = new int[razm];
    int vvod;
	   cout << "Ââåäèòå 1 äëÿ ââîäà ñ êëàâèàòóðû \n(èëè ëþáîå äðóãîå çíà÷åíèÿ äëÿ àâòîìàòè÷åñêîãî ââîäà)." << endl;
        cin >> vvod;

    if(vvod < 0){
	cout << "Âû ââåëè íåêîðåêòíîå çíà÷åíèå. \nÏðîãðàììà çàâåðøàåò ðàáîòó." << endl;
	system("pause");
	return -1;
	    }

	if(vvod == 1){
	for(int i = 0; i < razm; i++){
	cin >> mass[i];
	if(mass[i] < 0){
	cout << "Âû ââåëè íåêîðåêòíîå çíà÷åíèå. \nÏðîãðàììà çàâåðøàåò ðàáîòó." << endl;
	system("pause");
	return -1;
	               }
	                             }
	             }
	else{
	for(int i = 0; i < razm; i++){
	mass[i] = rand()%100;
	                             }	
	    }
	
//Âûâîä ââåäåííîãî ìàññèâà. Работа выполнена.
for(int i = 0; i < razm; i++){
	cout << mass[i] << " " << " ";
                              }
         cout << endl;


int vvod_menu;

do{
		cout << "1 Íàéòè ìèíèìàëüíûé èíäåêñ ìàññèâà" << endl;
		cout << "2 Íàéòè ìàêñèìàëüíûé èíäåêñ ìàññèâà" << endl;
		cout << "3 Ñîðòèðîâêà ýëåìåíòîâ ìàññèâà" << endl;
		cout << "4 Íàõîæäåíèå ñàìîé äëèííîé ïîñëåäîâàòåëüíîñòè îäèíàêîâûõ ýëåìåíòîâ ìàññèâà" << endl;
		cout << "5 Íàéòè òðè íàèáîëüøèõ ýëåìåíòîâ ìàññèâà;" << endl;
		cout << "6 Ñðàâíåíèå äâóõ ìàññèâîâ" << endl;
        cout << "0 Âûõîä èç ïðîãðàììû" << endl;


cin >> vvod_menu;
if(vvod_menu < 0){
   cout << "Âû ââåëè íåêîðåêòíîå çíà÷åíèå. \nÏðîãðàììà çàâåðøàåò ðàáîòó." << endl;
	   system("pause");
	         return -1;
	             }
       switch(vvod_menu){
	   

case 1:{
min_index(mass, razm);
cout << endl;
break;	
	   }

case 2:{
max_index(mass, razm);
cout << endl;
break;	
	   }

case 3:{
pr_vibor(mass, razm);
cout << endl;
break;	
	   }

case 4:{
max_posled(mass, razm);
cout << endl;
break;	
	   }

case 5:{
vivod_3_max(mass, razm);
cout << endl;
break;	
	   }

case 6:{
int vvod;
       cout << "Ìàññèâ äëÿ ñðàâíåíèÿ." << endl;
	   cout << "Ââåäèòå 1 äëÿ ââîäà ñ êëàâèàòóðû \n(èëè ëþáîå äðóãîå çíà÷åíèÿ äëÿ àâòîìàòè÷åñêîãî ââîäà)." << endl;
       cin >> vvod;

	if(vvod == 1){
	   for(int i = 0; i < razm; i++){
	       cin >> mass_2[i];
		  
		   if(mass_2[i] < 0){
	cout << "Âû ââåëè íåêîðåêòíîå çíà÷åíèå. \nÏðîãðàììà çàâåðøàåò ðàáîòó." << endl;
    system("pause");
		return -1; 
		                    }
	   }
	}
	else{
	    for(int i = 0; i < razm; i++){
	        mass_2[i] = rand()%100;
	                                 }
	    }
cout << endl;
srvn_mass(mass, mass_2, razm);
	                         }
cout << endl;
break;	
	   }
	                    }

while(vvod_menu > 0 && vvod_menu < 7);

delete mass;
delete mass_2;
system("pause");
return 0;
}

// Ñîðòèðîâêà ìåòîäîì ïðÿìîãî âûáîðà
void pr_vibor(int *mass, int razm){

int min;
cout << endl;
for (int i = 0; i < razm; i++){
   min = i;

	for(int j = i+1; j < razm; j++){
		if(mass[j] < mass[min]){
		min = j;	
		                 }
	                            }

	if(mass[min] < mass[i]){
	swap(mass[min], mass[i]);  
	                 }
                           }

cout << endl;

for(int t = 0; t < razm; t++){
	cout << mass[t] << " ";
                          }
cout << endl;
             }

// Âûâîä 3 ìàêñèìàëüíûõ ýëåìåíòîâ ìàññèâà.
void vivod_3_max(int *mass, int razm){

// Ñîðòèðîâêà ìåòîäîì ïðÿìîãî âûáîðà.

int *vrem_mass = new int[razm];

for(int i = 0; i < razm; i++){
	vrem_mass[i] = mass[i];
     }

int min;

for (int i = 0; i < razm; i++){
   min = i;

	for(int j = i+1; j < razm; j++){
		if(vrem_mass[j] < vrem_mass[min]){
		min = j;	
		                 }
	                            }
	if(vrem_mass[min] < vrem_mass[i]){
	swap(vrem_mass[min], vrem_mass[i]);  
	                 }
                           }

cout << endl;

for(int t = 0; t < razm; t++){
	cout << vrem_mass[t] << " ";
                          }
cout << endl;
cout << endl;

cout << "3 Íàèáîëüøèõ ýëåìåíòîâ ìàññèâà:" <<endl;

for(int i = razm-1; i > razm-4; i--){
	cout << vrem_mass[i] << " ";
                               }
delete vrem_mass;
cout << endl;
             }

// Íàõîæäåíèå ìèíèìàëüíîãî ýëåìåíòà ìàññèâà.

void min_index(int *mass, int razm){
cout << endl;

int min = 0;
	for(int i = 1; i < razm; i++){
	   if(mass[min] > mass[i])
		  min = i;
	                             }

cout << endl;
cout << min<< " - " << "Èíäåêñ ìèíèìàëüíîãî ýëåìåíòà ìàññèâà." << endl;
}

// Ìàêñèìàëüíûé èíäåêñ
void max_index(int *mass, int razm){
cout << endl;
int max = 0;

for(int i = 1; i < razm; i++){
		if(mass[max] < mass[i]) 
		   max = i; 
	                         }

cout << max << " - " << "Èíäåêñ ìàêñèìàëüíîãî ýëåìåíòà ìàññèâà." << endl;
}

//Ôóíêöèÿ ñðàâíåíèÿ ìàññèâîâ
void srvn_mass(int *mass,int *mass_2 ,int razm){ 

for(int i = 0; i < razm; i++){
	cout << mass_2[i] << " " <<" ";
                             }
         cout << endl;

int srvn = 0; 
for(int i = 0; i < razm; i++){
	if(mass[i] == mass_2[i]){
	   srvn++;
	
	}
}

cout << "Êîëè÷åñòâî ñîâïàâøèõ ýëåìåíòîâ - " << srvn << endl;

if(srvn == razm--){ cout << "Ìàññèâû ðàâíû." << endl; }
else cout << "Ìàññèâû íå ðàâíû" << endl;

}

// Ñàìàÿ äëèííàÿ ïîñëåäîâàòåëüíîñòü
void max_posled(int *mass, int razm){


int sr=1,sr2=0;

for(int i=0; i < razm-1; i++)
         if(mass[i] == mass[i+1])
         {
             sr++;
             if(sr>sr2)
                sr2=sr;
         }
         else 
             sr=0;
cout<< "Äëèíà ìàêñèìàëüíîé ïîñëåäîâàòåëüíîñòè ðàâíà - " << sr2 << endl;

}
