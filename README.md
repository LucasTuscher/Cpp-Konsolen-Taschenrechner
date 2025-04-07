# Konsolen-Taschenrechner in C++ mit OOP

Dies ist ein einfacher Konsolen-Taschenrechner, der in C++ unter Verwendung der objektorientierten Programmierung (OOP) entwickelt wurde. Der Rechner unterstützt die vier Grundrechenarten: Addition, Subtraktion, Multiplikation und Division.

## Hauptfunktionen:
- **Addition** (+)
- **Subtraktion** (-)
- **Multiplikation** (*)
- **Division** (/)

## Features:
- **Fehlerbehandlung**: Der Taschenrechner behandelt die Division durch Null und ungültige Operatoren mit Ausnahmen.
- **OOP-Design**: Die Logik des Taschenrechners wurde in eine `Calculator`-Klasse ausgelagert, die einfach erweitert und wiederverwendet werden kann.

## Beispiel:
1. Gib die erste Zahl ein: `10`
2. Gib deinen Operator ein (+, -, *, /): `+`
3. Gib die zweite Zahl ein: `5`

Ergebnis: `15`

## Kompilieren und Ausführen:
Um den Taschenrechner zu kompilieren und auszuführen, folge diesen Schritten:

### Auf einem Linux/MacOS-System:
1. Speichere den Code in einer Datei, z. B. `Main.cpp`.
2. Öffne das Terminal und navigiere zum Verzeichnis, das die Datei enthält.
3. Kompiliere den Code mit:
   ```bash
   g++ -o calculator Main.cpp
