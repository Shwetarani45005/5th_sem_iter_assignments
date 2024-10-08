console.log("EXERCISE3");

let user = {name:"John",years:30};

// your code to the left side
let{name,years:age,isAdmin=false} = user;

console.log(name);
console.log(age);
console.log(isAdmin);

console.log();