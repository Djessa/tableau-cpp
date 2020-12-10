#include <iostream>
#include <vector>
#include "Tableau.h"

using namespace std;

int main()
{
   vector <double> tableau(3);
   for(int i(0); i < tableau.size(); i++){
        cout<<"tableau["<<i<<"] : ";
        cin>>tableau[i];
   }
   cout<<"Somme : "<<somme(tableau)<<endl;
   cout<<"Moyenne : "<<moyenne(tableau)<<endl;
   return 0;
}
