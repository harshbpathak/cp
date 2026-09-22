import requests
from bs4 import BeautifulSoup

def solve(url: str):
    try:
        resp = requests.get(url)
        resp.raise_for_status()
    except requests.RequestException as e:
        print(f"Error fetching the URL: {e}")
        return

    soup = BeautifulSoup(resp.text, "html.parser")

    table = soup.find("table")
    if table is None:
        print("No table found.")
        return

    rows = table.find_all("tr")

    grid_data = {}

    max_x = 0
    max_y = 0

    for row in rows[1:]:
        cols = row.find_all("td")

        if len(cols) >= 3:
            try:
                x = int(cols[0].get_text(strip=True))
                char = cols[1].get_text(strip=True)

                if char == "":
                    char = " "

                y = int(cols[2].get_text(strip=True))

                grid_data[(x, y)] = char

                max_x = max(max_x, x)
                max_y = max(max_y, y)

            except ValueError:
                continue

    # Print the grid
    for y in range(max_y, -1, -1):
        row_string = ""
        for x in range(max_x + 1):
            row_string += grid_data.get((x, y), " ")
        print(row_string)


def main():
    url = input("Enter URL: ")
    solve(url)


if __name__ == "__main__":
    main()