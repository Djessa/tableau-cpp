#include <iostream>
#include <vector>
using namespace std;
double somme(vector<double> const& tableau)
{
    double s(0);
    for(int i(0); i < tableau.size(); i++)
    {
        s+= tableau[i];
    }
    return s;
}
double moyenne(vector<double> const& tableau)
{
    double somme(0), retour(0);
    for(int i(0); i < tableau.size(); i++)
    {
        somme += tableau[i];
    }
    retour = somme / tableau.size();

    return retour;
}
void affiche(vector<double> const& tableau)
{
    for(int i(0); i < tableau.size(); i++)
    {
        cout<<tableau[i]<<endl;
    }
}
