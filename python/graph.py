from sys import argv
import matplotlib.pyplot as plt

def main(liste):
    liste = []
    for i in range(1, len(argv)):
        liste.append(int(argv[i]))
    plt.plot(liste)
    plt.savefig("graphiques/graph.png")

if __name__ == "__main__":
    main(argv)