#include <iostream>

class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() : coach(0), player(0) {}

    // Overload pre-increment operator
    ManchesterUnited operator++() {
        coach++;
        player++;
        return *this;
    }

    // Overload equality operator
    bool operator==(const ManchesterUnited& other) const {
        return (coach == other.coach) && (player == other.player);
    }

    // Display data
    void getData() const {
        std::cout << "Coach: " << coach << ", Player: " << player << std::endl;
    }

    // Set values for coach and player
    void setValues(int c, int p) {
        coach = c;
        player = p;
    }
};

int main() {
    ManchesterUnited ronaldo, fernandes;

    // Set initial values for ronaldo and fernandes
    ronaldo.setValues(4, 5);
    fernandes.setValues(5, 6);

    // Display data for ronaldo and fernandes before increment
    std::cout << "ronaldo before increment: ";
    ronaldo.getData();

    std::cout << "fernandes before increment: ";
    fernandes.getData();

    // Increment ronaldo
    ++ronaldo;

    // Display data for ronaldo and fernandes after increment
    std::cout << "ronaldo after increment: ";
    ronaldo.getData();

    std::cout << "fernandes after increment: ";
    fernandes.getData();

    // Compare ronaldo and fernandes
    if (ronaldo == fernandes) {
        std::cout << "ronaldo is equal to fernandes." << std::endl;
    } else {
        std::cout << "ronaldo is not equal to fernandes." << std::endl;
    }

    return 0;
}

