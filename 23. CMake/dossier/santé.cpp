#include "santé.hpp"

#include <iostream>

using namespace std;

bool question_santé() {

	cout << "Vous portez-vous bien ? (O/n)" << endl;
	char réponse;
	cin >> réponse;

	if (réponse == 'o' || réponse == 'O')
		return true;

	return false;
}
