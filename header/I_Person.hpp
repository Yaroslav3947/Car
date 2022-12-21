#pragma once

#include <string>
#include <iostream>

#include <I_Printable.hpp>
#include <UtilChecking.hpp>
#include <IllegalAgeException.hpp>
#include <IllegalWageException.hpp>
#include <IllegalNumberOfRepairedOrSoldCarsException.hpp>

class I_Person : public I_Printable {
private:
    static constexpr const char *default_name = "Unnamed Person";
    static constexpr const int default_age = 18;
protected:
    int age;
    std::string name;
public:
    I_Person(std::string name = default_name, int age = default_age);
    virtual int get_age() const;
    virtual ~I_Person() = default;
    virtual std::string get_name() const;
    virtual void printInfo(std::ostream &os) const override;
};

