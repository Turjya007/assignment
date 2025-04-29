function testStackDynamic(n) {
    let arr = new Array(n);
    for(let i = 0; i < n; i++) 
        arr[i] = i * 2;
    
    console.log(arr);
}

let n = parseInt(prompt("Enter size:"));
testStackDynamic(n);
