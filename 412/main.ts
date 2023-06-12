function fizzBuzz(n: number): string[] {
  const res: string[] = [];
  const RESULT_DICT: Record<number, string> = { 3: "Fizz", 5: "Buzz" };

  for (let i = 1; i <= n; i++) {
    let tempItem = "";
    for (const key in RESULT_DICT) {
      if (i % Number(key) === 0) {
        tempItem = tempItem + RESULT_DICT[key];
      }
    }

    if (tempItem === "") {
      tempItem = i.toString();
    }
    res.push(tempItem);
  }
  return res;
}

console.log(fizzBuzz(15))