def read_first_five_lines(file_path):
    with open(file_path, 'rb') as file:
        for _ in range(5):
            line = file.readline()
            if not line:
                break
            print(f"Raw line: {line}")

            # Try to detect separator in binary data
            if b'\t' in line:
                print(f"Line uses tab as separator: {line}")
            elif b',' in line:
                print(f"Line uses comma as separator: {line}")
            elif b' ' in line:
                print(f"Line uses space as separator: {line}")
            else:
                print(f"Line uses unknown separator: {line}")

# Usage
read_first_five_lines('testgraph.bin')
