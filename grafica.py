import numpy as np
import matplotlib.pyplot as plt

algo = np.loadtxt("imagenes.dat")
n_points = int(len(algo))
x = np.linspace(0, 200, n_points)
print(n_points)

plt.figure()
plt.plot(x, algo)
plt.imshow(x)
plt.xlabel("posición")
plt.ylabel("tiempo")
plt.colorbar(label="Potencial")
plt.savefig("grafica.png")
