function processData(input) {
    var alphab = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];
    input = input.toLowerCase();
    input = input.replace(/ /g,'');
    input = input.split('');
    
    for(var i = 0; i < alphab.length; i++){
        if(input.indexOf(alphab[i]) < 0){
            console.log("not pangram");
            return;
        }
    }
    
    console.log("pangram");
    return;
    
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
