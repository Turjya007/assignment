let n = parseInt(prompt("Enter size:"));
let arr = new Array(n); // Allocated with size

for(let i = 0; i < n; i++) 
    arr[i] = i * 3;

console.log(arr);
