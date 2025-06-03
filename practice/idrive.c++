#include <iostream>

using namespace std;

class Engine {
    private:
        int m_EngineCapacity;
        bool m_EngineRunning;
        int m_Hoursepower;
    public:
        Engine(int EngineCapacity = 2000, int Horsepower = 200) {
            m_EngineCapacity = EngineCapacity;
            m_Hoursepower = Horsepower;
            m_EngineRunning = false;
        }
        bool EngineStart() {
            if (!m_EngineRunning) {
                m_EngineRunning = true;
            };
            return true;
        };
        bool EngineStop() {
            if (!m_EngineRunning) {
            m_EngineRunning = false;
            }
            return true;
        };
        bool get_EngineStatus() {
            return m_EngineRunning;
        }  
};
class Car{
    protected:
        string m_DriveMode;
    
    private:
        Engine m_Engine;
        int m_MaxSeating;
        int m_price;
        int m_base;
        string m_brand;
        string m_modle;
        int m_year;
        void m_UpdatePrice(int base = 500000) {
            m_price = m_MaxSeating * base;
        }
    
    public:
        Car(string x, string y, int z, int s) {
            m_brand = x;
            m_modle = y;
            m_year = z;
            m_MaxSeating = s;
        }
        int get_MaxSeating() {
            return m_MaxSeating;
        }
        int get_price() {
            m_price = m_MaxSeating * 500000;
            return m_price;
        }
        string get_brand() {
            return m_brand;
        }
        string get_DriveMode() {
            return m_DriveMode;
        }
        bool get_EngineStatus(){
            return m_Engine.get_EngineStatus();
        }
        bool StartEngine() {
            return m_Engine.EngineStart();
        }
        bool stopEngine() {
            return m_Engine.EngineStop();
        }
};

class BMW_Car : public Car {
    public:
        BMW_Car(string y, int z, int s) : Car("BMW", y, z, s) {
            cout << "Constructiong BMW_Car\n";
            m_DriveMode = "Rear-wheel";
        }
        string get_DriveMode() {
            return m_DriveMode;
        }
};

int main(){
   BMW_Car car_1("X5", 2023, 6);
   cout << " : Brand =" << car_1.get_brand() << endl;
   cout << " : Drice Mode =" << car_1.get_DriveMode() << endl;
   cout << " : EngineStatus =" << car_1.get_EngineStatus() << endl;
   return 0;
}
