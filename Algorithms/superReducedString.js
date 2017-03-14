function processData(input) {
    input = input.split('');
    var i = 0;
    while(i != input.length){
        if(input[i] === input[i+1]){
            input.splice(i,1);
            input.splice(i,1);
            i = 0;
        }
        else{
            i++;
        }
        if(input.length == 0){
            console.log("Empty String");
        }
    }
    console.log(input.join(''));
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});

