import sys

def solve() -> None:
    s = sys.stdin.readline().strip()          # the username
    distinct = len(set(s))                    # number of distinct letters
    if distinct % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")

if __name__ == "__main__":
    solve()