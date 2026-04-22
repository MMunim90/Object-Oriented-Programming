# Basic class and object

class Car:
    total_car = 0
    
    def __init__(self, brand, model):
        self.__brand = brand
        self.__model = model
        Car.total_car += 1 
    
    # here we can use any name here, but it is better practice to use name like, get, and set
    def get_brand(self):
        return self.__brand + " !"
        
    def full_name(self):
        return f"{self.__brand} {self.__model}"
    
    def fuel_type(self):
        return "Petrol or Diesel"
    
    @staticmethod
    def general_description():
        return "Cars are means of transport"
    
    @property
    def model(self):
        return self.__model
    
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model)
        self.battery_size = battery_size
        
    def fuel_type(self):
        return "Electric Charge"

        
my_tesla = ElectricCar('Tesla', 'Model S', '85kWH')
# print(my_tesla.model)
# print(my_tesla.full_name())
# print(my_tesla.__brand)
# print(my_tesla.get_brand())
    
my_car = Car("Toyota", "Corolla")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.full_name())

# my_new_car = Car('Tata', 'Safari')
# print(my_new_car.model)

# polymorphism
# print(my_tesla.fuel_type())
# print(my_car.fuel_type())


# 6.
# Car("Tata", "Safari")
# Car("Tata", "Nexon")

# # print(safari.total_car)

# print(Car.total_car)


# 7.
# my_another_car = Car("Tata", "Safari")
# # print(my_another_car.general_description())
# print(Car.general_description())


8.
my_other_car = Car("Tata", "Safari")
# my_other_car.model = "City"
Car("Tata", "Nexon")
# print(my_other_car.model)
print(my_other_car.model)