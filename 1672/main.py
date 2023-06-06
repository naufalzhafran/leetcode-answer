
def maximumWealth(self, accounts: list[list[int]]) -> int:
    maxWealth = 0

    for i in range(0, len(accounts)):
        accumulator = 0
        for j in range(0, len(accounts[i])):
            accumulator += accounts[i][j]
        maxWealth = max(maxWealth, accumulator)
        
    return maxWealth

print(maximumWealth([[1,2,3], [2,3,4]]))