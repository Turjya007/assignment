let arr = [];
let n = parseInt(prompt("Enter number of elements to insert:"));

for(let i = 0; i < n; i++) {
    let x = parseInt(prompt("Enter element:"));
    arr.push(x); // Dynamic growth
}

console.log(arr);
