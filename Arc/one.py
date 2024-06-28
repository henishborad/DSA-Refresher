# ONE


def solution(commands):
    position = 0
    for command in commands:
        if command == "L":
            position -= 1
        elif command == "R":
            position += 1

    if position < 0:
        return "L"
    elif position > 0:
        return "R"
    else:
        return ""
