function maximumWealth(accounts: number[][]): number {
  let maxWealth = 0;

  for (let i = 0; i < accounts.length; i++) {
    let accumulator = 0;
    for (let j = 0; j < accounts[i].length; j++) {
      accumulator = accumulator + accounts[i][j];
    }
    maxWealth = Math.max(maxWealth, accumulator);
  }

  return maxWealth;
}

console.log(
  maximumWealth([
    [1, 2, 3],
    [3, 2, 2],
  ])
);
