#include <iostream>
using namespace std;

int main() { 
  const float coutHoraireMeca = 4.0;
  const float coutHoraireElec = 5.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix ;
  int min;
  cout << "******Gestion d'une station Velo ******"<< endl << endl;
  cout << "----------------------------------------"<< endl << endl;
  cout << "Velos disponibles :"<< velosDispos << endl;
  cout << "Points d'attache disponibles:  "<< capacite - velosDispos << endl;
  

  cout << "_________________________________________"<< endl << endl;
  cout << "1. Emprunter un Velo" << endl ;
  cout << "2. Restituer un Velo" << endl;
  cout << "3. Estimer le cout de la location" << endl;
  cout << "4. Quitter l'application" << endl << endl;

  switch(choix) {
    case '0':
    cout << "on decremente le nombre de velos disponibles \n";
      break;
    case '1':
    cout<< "on incremente le nombre de velos disponibles \n ";
      break;
    case '2':
    cout << "Duree en minutes  ";
      cin >> min;
    cout << "Vous souhaitez conserver le velos? ";
    cout << "Velos Mecanique ou electrique ?";
      
      break;
    case '3':
    cout << " vous avez choisi l'option: Quitter l'application";
      break;
    
  }
  
  cout << "faire un choix :" << endl;
  cin >> choix;
  cout <<"vous avez choisi l'option"<< choix << endl;

  return 0;

    }