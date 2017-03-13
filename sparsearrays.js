function processData(input) {
    var lines = input.split('\n');
    var n = lines[0]    //number of strings
    var cache = [];
    var i;              //iterator
    var count = 0;
    
    for(i = 1; i <= n; i++){
        cache.push(lines[i]);   //append each string into cache
    }
    
    i++;
    for(var i; i < lines.length; i++){
        count = 0;
        //iterate through cache
        for(var j = 0; j < cache.length; j++){
            if(lines[i] === cache[j]){
                
                count++;    //count number of matches
            }
        }
        console.log(count);
    }
    
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
