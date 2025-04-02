# tp1

## ¿Porque es conveniente incluir el archivo .gitignore?
Es conveniente para poder excluir de nuestro repositorio archivos indeseados, como contraseñas, archivos ejecutables, archivos creados al compilar un programa, etc.

## ¿Cuando se debe hacer la inclusión del archivo .gitignore?
Debe hacerse al comienzo de nuestro repositorio, en la carpeta raiz, incluyendolo con git add .gitignore

## ¿Como configuraría el archivo .gitignore?
Podría ser de la siguiente manera, con el objetivo de excluir un archivo de texto (.txt)


#Excluye los archivos .txt


*.txt


## ¿Que archivos ve en su repositorio de github? ¿Cual cree que no hace falta que esté?
Se pueden ver los archivos .gitignore, README.md, archivo.txt, tp1_1.c, tp1_1.exe, este ultimo no debería estar subido al repositorio