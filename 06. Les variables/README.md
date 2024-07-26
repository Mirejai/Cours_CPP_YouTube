# 06. Les variables

Dans cette vidéo vous verrez ce que sont les variables

[Vidéo YouTube](https://youtu.be/tjrAv4kXO4o)


## Fichiers

Le fichier code.cpp contient le code source.

Le fichier compiler.sh est un script pour compiler code.cpp.


Pour compiler le code :
`./compiler.sh`

Note : Lors de la compilation vous aurrez un message dans la console ressemblant à

```
code.cpp: In function ‘int main()’:
code.cpp:7:9: warning: variable ‘variable1’ set but not used [-Wunused-but-set-variable]
    7 |     int variable1;
      |         ^~~~~~~~~
code.cpp:19:9: warning: unused variable ‘variable_copiée’ [-Wunused-variable]
   19 |     int variable_copiée{variable_initialisé};
      |         ^~~~~~~~~~~~~~~
code.cpp:22:12: warning: unused variable ‘variable_2’ [-Wunused-variable]
   22 |     double variable_2{8.0674};
      |            ^~~~~~~~~~
code.cpp:25:10: warning: unused variable ‘suis_je_le_meilleur’ [-Wunused-variable]
   25 |     bool suis_je_le_meilleur{true};
      |          ^~~~~~~~~~~~~~~~~~~
code.cpp:28:10: warning: unused variable ‘lettre_g’ [-Wunused-variable]
   28 |     char lettre_g{'G'};
      |          ^~~~~~~~

```

Ce ne sont que des avertissements sur le fait que les variables déclarées ne sont pas utilisées. Vous pouvez les ignorer.

Pour executer le programme compilé :
Sur Windows :
`./variables.exe`
Sur Linux :
`./variables`

