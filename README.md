# Patron-nhexagonal
Se dispone de un robot dispensador de pegamento, el cual dispone de un programa
básico para aplicar pegamento en las esquinas de un rectángulo. Nuestra empresa,
acaba de conseguir un contrato para la fabricación de un nuevo producto y hay que
cambiar el programa del robot para que aplique el pegamento en un nuevo patrón.
Se debe crear un programa que dispense el pegamento acorde al nuevo patrón (antes
de poner el programa en el robot, se va a probar en la pantalla del ordenador
mediante dibujo). El patrón depende del tamaño tamaño del producto, siendo el
tamaño N. Al robot hay que indicarle el tamaño N del producto (el tamaño se
introduce por teclado, y debe ser un entero positivo mayor que cero. Si N es menor o
igual a 0 se debe mostrar el mensaje “Valor no valido” y termina).
El patrón tiene las siguientes características:
• Está compuesto de un hexágono de lado N, y en su interior un conjunto de
hexágonos concéntricos donde uno es invisible y el siguiente visible
• Los hexágonos están unidos por las diagonales
• Los símbolos del patron pueden ser un * o un espacio en blanco. En
horizontal cada símbolo ocupa dos espacios y en vertical sólo un espacio
A continuación, a modo de ejemplo, se muestra el patrón de tamaño 10 que
debe generar el robot a través del programa (se muestra también distribuido en una
cuadricula para que se vea el número de espacios que separa cada elemento).
