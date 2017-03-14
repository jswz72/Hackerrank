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
    var time = readLine();
    
    if(time[8] === 'P'){
        if(time.slice(0,2) === '12'){
            console.log(time.slice(0,8));
        }else{
            //Convert first 2 digits to num, add 12, prepend to 'time'
        var num = Number(time.slice(0,2));
        num += 12;
        console.log(num.toString() + time.slice(2,8));
        }   
    }
    else{
        if(time.slice(0,2) === '12'){
            console.log('00' + time.slice(2,8));
            
        }else{
            console.log(time.slice(0,8));
        }
    }
    return;

}

