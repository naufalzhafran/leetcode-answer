function numberOfSteps(num: number): number {
    let res = 0

    while(num !== 0){
        if (num & 1){
            num = num ^ 1
        }else{
            num = num >> 1
        }
        res = res + 1
    }

    return res
};

console.log(numberOfSteps(14))