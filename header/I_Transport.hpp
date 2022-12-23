#pragma once

#include <string>

#include <I_Printable.hpp>

class I_Transport : public I_Printable {
    const int floor_for_price = 0;
protected:
    bool is_new;
    double price;
    std::string brand;
    std::string model;
    std::string country;
    double fuel_comsumption;
    int year_of_manufacture;
    static constexpr const double default_price = 0.0;
    static constexpr const bool default_is_new = true;
    static constexpr const int default_year_of_manufacture = 0;
    static constexpr const double default_fuel_comsumption = 0.0;
    static constexpr const char *default_model = "unknown model";
    static constexpr const char *default_brand = "unknown brand";
    static constexpr const char *default_country = "unknown country";
public:
    I_Transport(std::string brand = default_brand, std::string model = default_model, std::string country = default_country,
                int year_of_manufacture = default_year_of_manufacture, double fuel_comsumption = default_fuel_comsumption, 
                double price = default_price, bool is_new = default_is_new);
    bool get_is_new() const;
    double get_price() const;
    std::string get_brand() const;
    std::string get_model() const;
    std::string get_country() const;
    virtual ~I_Transport() = default;
    int get_year_of_manufacture() const;
    double get_fuel_comsumption() const;
    virtual void printInfo(std::ostream &os) const override;
};