//sum-all-odd-fibonacci-numbers , from freecodecamp
function sumFibs(num) {

  var list = fibonacci(num);

  return list
    .filter( function(number) {return number % 2 === 1;}) // takes out even nubers
    .reduce(function(p,c){ return p +c;}, 0);
}

function fibonacci(num) {
  if (num === 1) return [1, 1];

  var list = [1,1];

  while (true) {
    var next = list[list.length-1] + list[list.length-2];
    if (next <= num) {
      list.push(next);
    } else {
      return list;
     }
   }
}

sumFibs(4);
//create new array property identifing last value
//create new array property identifying second to last value
//create array starting Fibonacci sequence
// continue sequence (adding last 2 numbers in array ) while the next fib number < (num)
//remove all even numbers from array (filter)
//add all numbers in array (reduce)
