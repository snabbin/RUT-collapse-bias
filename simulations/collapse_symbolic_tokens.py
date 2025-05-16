import zlib, random

def compress_score(s): return len(zlib.compress(s.encode()))
options = ["00000000", "11111111", "01010101", ''.join(random.choice('01') for _ in range(8))]
scores = {s: compress_score(s) for s in options}
for s in options: print(f"{s}: {scores[s]}")
print("Chosen:", min(scores, key=scores.get))
