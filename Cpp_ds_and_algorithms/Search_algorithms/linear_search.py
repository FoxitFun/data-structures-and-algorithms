def find_first_index_of(numbers: list[int], to_find: int) -> int:
    """
    Wyszukiwanie liniowe.
    """

    for i in range(len(numbers)):
        if numbers[i] == to_find:
            return i

    return -1


def enumerate_find_first_index_of(numbers: list[int], to_find: int) -> int:
    """
    Wyszukiwanie liniowe z zastosowaniem enumerate.
    """
    for idx, num in enumerate(numbers):
        if num == to_find:
            return idx

    return -1


def find_last_index_of(numbers: list[int], to_find: int) -> int:
    """
    Wyszukiwanie liniowe od tyłu.
    """

    for i in range(len(numbers)-1, -1, -1):
        if numbers[i] == to_find:
            return i

    return -1


if __name__ == '__main__':
    my_numbers = [10, 2, 33, 23, 1, 12, -24, 0, 3, 5, 1, 2, 0]

    print(find_first_index_of(my_numbers, 33))
    print(enumerate_find_first_index_of(my_numbers, 33))
    print(find_last_index_of(my_numbers, 33))

    print()
    print(find_first_index_of(my_numbers, 1))
    print(find_last_index_of(my_numbers, 1))

    print()
    print(find_first_index_of(my_numbers, 100))
    print(enumerate_find_first_index_of(my_numbers, 100))
    print(find_last_index_of(my_numbers, 100))
