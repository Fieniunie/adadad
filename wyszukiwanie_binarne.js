szuk=parseInt(prompt("jakiej liczby szukasz? "))
tablica = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47];
document.writeln("liczba, ktorej szukasz: ", szuk)
document.writeln("<hr>")
l=0
p=14
sr=(l+p)/2

while(l<=p){
	if(tablica[sr]=szuk){
		document.writeln("Liczba ", szuk, " jest w tabeli na pozycji ", sr)
	}
	else if(tablica[sr]>szuk){
		p=sr-1
	}
	else{
		l=sr+1
	}
}

document.writeln("Liczba nie znajduje sie w tablicy")




