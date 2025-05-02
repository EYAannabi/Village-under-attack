#ifndef RESOURCES_H
#define RESOURCES_H

class Resources {
private:
    int gold;
    int elixir;

public:
    Resources(int gold = 0, int elixir = 0);

    // Getters
    int getGold() const;
    int getElixir() const;

    // Additions
    void addGold(int amount);
    void addElixir(int amount);

    // Consumption
    bool consumeGold(int amount);
    bool consumeElixir(int amount);
};

#endif // RESOURCES_H

