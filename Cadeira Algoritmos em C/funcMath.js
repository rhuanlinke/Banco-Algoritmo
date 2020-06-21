const raio = 5.6
const area = Math.PI  * Math.pow(raio, 2) //Math é um objeto do JS, como não existe potência por exemplo, Math.pow(variavel, potencia), fará o cálculo de potência. Da mesma forma que Math.PI representa o PI sem ter que digita-lo.

console.log(area.toFixed(2))
console.log(typeof Math) //Math é um objeto!!!