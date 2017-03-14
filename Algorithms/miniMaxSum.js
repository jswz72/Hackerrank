process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////
function main() {
    var a_temp = readLine().split(' ');
    var a = parseInt(a_temp[0]);
    var b = parseInt(a_temp[1]);
    var c = parseInt(a_temp[2]);
    var d = parseInt(a_temp[3]);
    var e = parseInt(a_temp[4]);
    
    var sum1 = a + b + c + d;   //skip e
    var min = sum1;
    var max = sum1;
    
    sum1 = a + b + c + e;   //skip d
    if(sum1 > max){
        max = sum1;
    }
    if(sum1 < min){
        min = sum1;
    }
    sum1 = a + b + d + e;   //skip c
    if(sum1 > max){
        max = sum1;
    }
    if(sum1 < min){
        min = sum1;
    }
    sum1 = a + c + d + e;   //skip b
    if(sum1 > max){
        max = sum1;
    }
    if(sum1 < min){
        min = sum1;
    }
    sum1 = b + c + d + e;   //skip a
    if(sum1 > max){
        max = sum1;
    }
    if(sum1 < min){
        min = sum1;
    }
    console.log(min,max);
    return;
}

