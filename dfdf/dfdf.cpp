#include <iostream>
using namespace std;

// class Student {
// protected:
//    string name;
//    int age;

// public:


//    Student() 
//    {
//        name = "";
//        age = 0;
//    }

//    Student(string newName, int newAge) 
//    {
//        name = newName;
//        age = newAge;
//    }

//    string GetName() const 
//    {
//        return name;
//    }

//    int GetAge() const 
//    {
//        return age;
//    }

//    void SetName(string name) 
//    {
//        name = name;
//    }

//    void SetAge(int age) 
//    {
//        age = age;
//    }

//    void Print() const 
//    {
//        cout << "Name: " << name << ", Age: " << age << "\n";
//    }

// };

// class Aspirant : public Student 
// {

// protected:
//    string topic;

// public:

//    Aspirant() 
//    {
//        topic = "";
//    }

//    Aspirant(string newName, int newAge, string newTopic)
//    {
//        name = newName;
//        age = newAge;   
//        topic = newTopic;
//    }

//    string GetTopic() const {
//        return topic;
//    }

//    void SetTopic(string topic) {
//        topic = topic;
//    }

//    void Print() const {
//        Student::Print();
//        cout << "Thesis Topic: " << topic << "\n";
//    }
// };

// int main()
// {
//    Aspirant asp("Ihor", 20, "Design");
//    asp.Print();
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class Transport {
// protected:
//     string type;
//     double speed;
//     double distance;

// public:
//     Transport() : type(""), speed(0.0), distance(0.0) {}

//     Transport(string newType, double newSpeed, double newDistance) {
//         type = newType;
//         speed = newSpeed;
//         distance = newDistance;
//     }

//     double CalculateTime() const {
//         return distance / speed;
//     }

//     double CalculateCost() const {
//         return 0.0;
//     }

//     void Print() const {
//         cout << "Type: " << type << ", Speed: " << speed << " km/h, Distance: " << distance << " km" << "\n";
//     }
// };

// class Car : public Transport {
// private:
//     double fuelConsumption;
//     double fuelPrice;

// public:
//     Car(double newSpeed, double newDistance, double newFuelConsumption, double newFuelPrice) {
//         type = "Car";
//         speed = newSpeed;
//         distance = newDistance;
//         fuelConsumption = newFuelConsumption;
//         fuelPrice = newFuelPrice;
//     }

//     double CalculateCost() const {
//         return (fuelConsumption / 100) * distance * fuelPrice;
//     }
// };

// class Taxi : public Transport {
// private:
//     double initialFee;
//     double costPerKilometer;

// public:
//     Taxi(double newSpeed, double newDistance, double newInitialFee, double newCostPerKilometer) {
//         type = "Taxi";
//         speed = newSpeed;
//         distance = newDistance;
//         initialFee = newInitialFee;
//         costPerKilometer = newCostPerKilometer;
//     }

//     double CalculateCost() const {
//         return initialFee + costPerKilometer * distance;
//     }
// };

// class Tram : public Transport {
// public:
//     Tram(double newSpeed, double newDistance) {
//         type = "Tram";
//         speed = newSpeed;
//         distance = newDistance;
//     }

//     double CalculateCost() const {
//         return 0.0;
//     }
// };

// class Trolleybus : public Transport {
// private:
//     double ticketPrice;

// public:
//     Trolleybus(double newSpeed, double newDistance, double newTicketPrice) {
//         type = "Trolleybus";
//         speed = newSpeed;
//         distance = newDistance;
//         ticketPrice = newTicketPrice;
//     }

//     double CalculateCost() const {
//         return ticketPrice;
//     }
// };

// class Minibus : public Transport {
// private:
//     double fare;

// public:
//     Minibus(double newSpeed, double newDistance, double newFare) {
//         type = "Minibus";
//         speed = newSpeed;
//         distance = newDistance;
//         fare = newFare;
//     }

//     double CalculateCost() const {
//         return fare;
//     }
// };

// class EScooter : public Transport {
// private:
//     double rentalFee;
//     double usageCostPerMinute;

// public:
//     EScooter(double newSpeed, double newDistance, double newRentalFee, double newUsageCostPerMinute) {
//         type = "E Scooter";
//         speed = newSpeed;
//         distance = newDistance;
//         rentalFee = newRentalFee;
//         usageCostPerMinute = newUsageCostPerMinute;
//     }

//     double CalculateCost() const {
//         return rentalFee + (CalculateTime() * 60) * usageCostPerMinute;
//     }
// };

// class Airplane : public Transport {
// private:
//     double ticketPrice;

// public:
//     Airplane(double newSpeed, double newDistance, double newTicketPrice) {
//         type = "Airplane";
//         speed = newSpeed;
//         distance = newDistance;
//         ticketPrice = newTicketPrice;
//     }

//     double CalculateCost() const {
//         return ticketPrice;
//     }
// };

// class Bicycle : public Transport {
// public:
//     Bicycle(double newSpeed, double newDistance) {
//         type = "Bicycle";
//         speed = newSpeed;
//         distance = newDistance;
//     }

//     double CalculateCost() const {
//         return 0.0;
//     }
// };

// class Train : public Transport {
// private:
//     double ticketPrice;

// public:
//     Train(double newSpeed, double newDistance, double newTicketPrice) {
//         type = "Train";
//         speed = newSpeed;
//         distance = newDistance;
//         ticketPrice = newTicketPrice;
//     }

//     double CalculateCost() const {
//         return ticketPrice;
//     }
// };

// int main() {
//     Car car(120, 500, 7.5, 30);
//     Taxi taxi(60, 20, 5, 2);
//     Tram tram(20, 10);
//     Trolleybus trolleybus(30, 15, 1.5);
//     Minibus minibus(40, 25, 3);
//     EScooter electricScooter(25, 5, 1, 0.2);
//     Airplane airplane(800, 500, 300);
//     Bicycle bicycle(15, 5);
//     Train train(80, 500, 150);

//     cout << "Car:" << endl;
//     car.Print();
//     cout << "Time: " << car.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << car.CalculateCost() << " UAH" << endl;

//     cout << "\nTaxi:" << endl;
//     taxi.Print();
//     cout << "Time: " << taxi.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << taxi.CalculateCost() << " UAH" << endl;

//     cout << "\nTram:" << endl;
//     tram.Print();
//     cout << "Time: " << tram.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << tram.CalculateCost() << " UAH" << endl;

//     cout << "\nTrolleybus:" << endl;
//     trolleybus.Print();
//     cout << "Time: " << trolleybus.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << trolleybus.CalculateCost() << " UAH" << endl;

//     cout << "\nMinibus:" << endl;
//     minibus.Print();
//     cout << "Time: " << minibus.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << minibus.CalculateCost() << " UAH" << endl;

//     cout << "\nE Scooter:" << endl;
//     electricScooter.Print();
//     cout << "Time: " << electricScooter.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << electricScooter.CalculateCost() << " UAH" << endl;

//     cout << "\nAirplane:" << endl;
//     airplane.Print();
//     cout << "Time: " << airplane.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << airplane.CalculateCost() << " UAH" << endl;

//     cout << "\nBicycle:" << endl;
//     bicycle.Print();
//     cout << "Time: " << bicycle.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << bicycle.CalculateCost() << " UAH" << endl;

//     cout << "\nTrain:" << endl;
//     train.Print();
//     cout << "Time: " << train.CalculateTime() << " hours" << endl;
//     cout << "Cost: " << train.CalculateCost() << " UAH" << endl;

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

class Point {
public:
    int X, Y;
};

class Pen {
public:
    string color;
    int thickness;
    string type;

    void Draw(Point start, int length, string direction) {}
};

class Brush {
public:
    string color;
};

class Geometry {
public:
    Pen pen;
    Brush* brush;
};

class Font {
public:
    int size;
    string family;
    bool bold;
    bool italic;
    bool underline;
    string color;

    Font() {
        size = 12;
        family = "Arial";
        bold = false;
        italic = false;
        underline = false;
        color = "Black";
    }

    Font(int size, const string& family, bool bold, bool italic, bool underline, const string& color) {
        size = size;
        this->family = family;
        bold = bold;
        italic = italic;
        underline = underline;
        this->color = color;
    }
};

class SolidBrush : public Brush {
public:
    SolidBrush(string color) {
        color = color;
    }
};

class GradientBrush : public Brush {
public:
    string colors[2];

    GradientBrush() {
        colors[0] = "";
        colors[1] = "";
    }

    GradientBrush(string color1, string color2) {
        colors[0] = color1;
        colors[1] = color2;
    }
};

class HatchBrush : public Brush {
public:
    string color;
    string pattern;

    HatchBrush(string color, string pattern) {
        color = color;
        pattern = pattern;
    }
};

class TextureBrush : public Brush {
public:
    string image_path;

    TextureBrush(string image_path) {
        image_path = image_path;
    }
};

class VisualBrush : public Brush {
public:
    string element_id;

    VisualBrush(string element_id) {
        element_id = element_id;
    }
};

class LinearGradientBrush : public GradientBrush {
public:
    LinearGradientBrush(string color1 = "", string color2 = "") {
        GradientBrush(color1, color2);
    }
};

class RadialGradientBrush : public GradientBrush {
public:
    RadialGradientBrush(string color1 = "", string color2 = "") {
        GradientBrush(color1, color2);
    }
};

class Rectangle : public Geometry {
public:
    int width;
    int height;

    Rectangle(int width, int height) {
        width = width;
        height = height;
    }
};

class Ellipse : public Geometry {
public:
    int radiusX;
    int radiusY;
};

class Polyline : public Geometry {
public:
    Point Points[100];
    int Count;
};

class Button : public Geometry, public Font {
public:
    string text;
    int textsize;
    string textcolor;

    Button(int width, int height, int textsize, const string& text, const string& textcolor)
        : Geometry(), Font(), text(text), textsize(textsize), textcolor(textcolor) {
        pen.color = "Black";
        pen.thickness = 2;
        pen.type = "Solid";

        brush = new SolidBrush("Black");
    }

    void Draw(Point start, int length, string direction) {}
};

int main() {
  
    Square square(100, 50);
    Font customFont(14, "Helvetica", true, false, false, "Navy");
    SolidPaint paint("Crimson");
    PressableButton actionButton(100, 50, 14, "Press Here!", "Gold");

    cout << "Creating a square on the canvas." << endl;
    cout << "Adjusting font size to: " << customFont.size << endl;
    cout << "Applying crimson solid paint." << endl;
    cout << "Button label: " << actionButton.label << endl;
    cout << "Button label color: " << actionButton.labelColor << endl;
    cout << "Button stroke color: " << actionButton.stroke.color << endl;
    cout << "Button stroke thickness: " << actionButton.stroke.thickness << endl;
    cout << "Button stroke type: " << actionButton.stroke.style << endl;
    cout << "Button paint color: " << actionButton.paint->color << endl;


    return 0;
}
