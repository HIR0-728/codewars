def high_and_low(numbers):
    num = []
    for i in numbers.split():
        num.append(int(i))
    return str(max(num)) + " " + str(min(num))