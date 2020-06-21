const valores = [7.7, 8.9]
console.log (valores[0])
console.log(valores[4])

valores[4] = 10
console.log(valores)

valores.push({id: 1}, false, null, 'teste')
console.log(valores)
console.log(valores[7])