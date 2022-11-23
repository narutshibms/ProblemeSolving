let s = "BOYKNVXBNXSTNNPEAPRO";


let arr = []
let sign = 1;
let row = 5;
let max = row;





for (let i = 0, j = 0, index = 0; i < s.length; i++) {

    while (j != max) {
        arr.push(new Array(6));

        if (sign > 0) {
            arr[j][i] = s[index++];

            j += sign;
        } else {
            arr[j][i] = s[index++];

            j += sign;
            break;
        }
    }
    if (j == row) {
        max = -1;
        j = j - 2;
        sign = -1;
    } else if (j < 0) {
        max = row;
        j = 1;
        sign = 1;
    }
}
let ss = "";

for (let n = 0; n < arr.length; n++) {
    for (let nn = 0; nn < arr[0].length; nn++)
        if (arr[n][nn] != undefined)
            ss += arr[n][nn];
}

console.log(ss)