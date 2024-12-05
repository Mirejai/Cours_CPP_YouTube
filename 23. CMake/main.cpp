#include "fichier1.hpp"
#include "dossier/santé.hpp"

int main(){

	dire_bonjour();

	bool va_bien = question_santé();

	if ( ! va_bien )
		souhaiter_rétablissement();

	dire_aurevoir();

	return 0;
}
