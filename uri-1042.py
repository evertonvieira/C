# -*- coding: utf-8 -*-


vetor = [0]*3;
soma = 0
valores = raw_input("");
vetor = valores.split(' ')

def ordenar(vetor):
	vet = vetor;
	print vet;
	temp = 0;
	for i in range(3):
		for j in range(3):
			if int(vetor[i]) < int(vetor[j]):
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
	return vetor, vet;


vet = ordenar(vetor);

print vet;
print vetor;








