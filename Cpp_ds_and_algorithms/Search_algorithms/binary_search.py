def binary_search(numbers: list[int], num_to_find: int):
    """
    Wyszukiwanie binarne, implementacja iteracyjna.
    """
    left = 0
    right = len(numbers) - 1

    while left <= right:
        mid = (left+right)//2

        if numbers[mid] == num_to_find:
            return mid
        elif numbers[mid] > num_to_find:
            right = mid - 1
        else:
            left = mid + 1

    return -1


def binary_search_rek(
        numbers: list[int], num_to_find: int,
        left: int, right: int
    ) -> int:
    """
    Wyszukiwanie binarne, implementacja rekurencyjna.
    """

    if left > right:
        return -1

    mid = (left + right) // 2

    if numbers[mid] == num_to_find:
        return mid
    elif numbers[mid] > num_to_find:
        return binary_search_rek(
            numbers=numbers,
            num_to_find=num_to_find,
            left=left,
            right=mid - 1
        )
    else:
        return binary_search_rek(
            numbers=numbers,
            num_to_find=num_to_find,
            left=mid + 1,
            right=right
        )


if __name__ == '__main__':
    my_numbers = [1, 2, 5, 8, 9, 11, 15, 20]

    print(binary_search(my_numbers, 5))
    print(binary_search_rek(my_numbers, 5, 0, len(my_numbers)-1))
