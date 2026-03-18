a = float(input('Coloque sua nota da primeira prova: '))
b = float(input('Coloque sua nota da segunda prova: '))
c = float(input('Coloque sua nota da terceira prova: '))
média = a + b + c

print(f'Valor da méida é: {média} = {(a + b + c)/3}')
if média <= 6.9:
    print(f'Infelizmente você foi reporvado')
elif média == 7:
    print(f'Você passou no limite para ser reprovado')
elif média >= 7.1 <9:
    print(f'Você tirou uma nota boa para passar')
elif média >8.9:
    print(f'Você passou tranquilo')