#include <iostream>
#include <string>

using namespace std;

class WeatherData {
public:
    double temperature;
    double temp_min;
    double temp_max;
    double pressure;
    int humidity;
    double wind_speed;
    string dt_txt;

    WeatherData(double temp, double t_min, double t_max, double press, int hum, double wind, const string& dt)
        : temperature(temp), temp_min(t_min), temp_max(t_max), pressure(press), humidity(hum), wind_speed(wind), dt_txt(dt) {}
};

WeatherData get_weather_data() 
{
    double temp = 278.76;
    double temp_min = 278.76;
    double temp_max = 279.558;
    double pressure = 1031.934;
    int humidity = 100;
    double wind_speed = 1.6;
    string dt_txt = "2019-03-27 18:00:00";

    return WeatherData(temp, temp_min, temp_max, pressure, humidity, wind_speed, dt_txt);
}

void print_weather_data(const WeatherData& weather_data) 
{
    cout << "Date and Time: " << weather_data.dt_txt << endl;
    cout << "Temperature: " << weather_data.temperature << "°K (Min: " << weather_data.temp_min << "°K, Max: " << weather_data.temp_max << "°K)" << endl;
    cout << "Pressure: " << weather_data.pressure << " hPa" << endl;
    cout << "Humidity: " << weather_data.humidity << "%" << endl;
    cout << "Wind Speed: " << weather_data.wind_speed << " m/s" << endl;
}

int main() {
    while (true) {
        cout << "1. Get weather" << endl;
        cout << "2. Get Wind Speed" << endl;
        cout << "3. Get Pressure" << endl;
        cout << "0. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            WeatherData weather_data = get_weather_data();
            print_weather_data(weather_data);
        } else if (choice == 2) {
            WeatherData weather_data = get_weather_data();
            cout << "Wind Speed: " << weather_data.wind_speed << " m/s" << endl;
        } else if (choice == 3) {
            WeatherData weather_data = get_weather_data();
            cout << "Pressure: " << weather_data.pressure << " hPa" << endl;
        } else if (choice == 0) {
            cout << "Exiting the program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
