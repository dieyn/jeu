#!/bin/bash
if [ !$1 ]
then 
echo "Bonjour qui est la ?"
echo "Quel est ton nom d'utilisateur?"
exit 1
fi
NOM=$1
if grep $NOM /etc/passwd > /dev/nul
then
	echo "Oui, je  te connais $NOM"
exit 0
else
	echo "Non ça ne me dit rien"
fi
exit 1 
