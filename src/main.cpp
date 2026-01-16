#include <iostream>
using namespace std;

int main() { 
  const float coutHoraireMeca = 4.0;
  const float coutHoraireElec = 5.0;
  int velosDispos = 20;
  int capacite = 0;
  int choix;
 
  cout << "******Gestion d'une station Velo ******"<< endl << endl;
  cout << "----------------------------------------"<< endl << endl;
  cout << "Velos disponibles :"<< velosDispos << endl;
  cout << "Points d'attache disponibles: "<< capacite << endl;
  

  cout << "_________________________________________"<< endl << endl;
  cout << "1. Emprunter un Velo" << endl ;
  cout << "2. Restituer un Velo" << endl;
  cout << "3. Estimer le cout de la location" << endl;
  cout << "4. Quitter l'application" << endl << endl;
  
  cout << "faire un choix :" << endl;
  cin >> choix;
  cout <<"vous avez choisi l'option"<< choix << endl;

  return 0;

    }