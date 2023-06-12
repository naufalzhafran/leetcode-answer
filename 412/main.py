def fizzBuzz(n: int) -> list[str]:
    res = []

    result_string_dict = {3: 'Fizz', 5: 'Buzz'}

    for i in range(1, n + 1):

        resItem = ''

        for divider in result_string_dict:
            if (i % divider == 0):
                resItem += result_string_dict[divider]

        if (resItem == ''):
            resItem = str(i)

        res.append(resItem)
    
    return res

print(fizzBuzz(15))