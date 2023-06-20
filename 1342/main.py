def numberOfSteps(num: int) -> int:
    res = 0

    while num != 0:
        if num & 1:
            num ^= 1
        else:
            num >>= 1
        res += 1

    return res


print(numberOfSteps(14))