plot.png: imagenes.dat grafica.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: DanielSalazar_ej28.cpp
	g++ DanielSalazar_ej28.cpp