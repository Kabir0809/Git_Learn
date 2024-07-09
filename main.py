from my_menu import Menu,MenuItem
from coffeemaker import CoffeeMaker
from moneymachine import MoneyMachine

moneymachine= MoneyMachine()
coffeemaker=CoffeeMaker()
my_menu=Menu()


is_on=True

while is_on:
    options=my_menu.get_items()
    choice=input(f"What is your choice {options}")
    if choice=="off":
        is_on=False
    elif choice=="report":
        print(moneymachine.report())
        print(coffeemaker.report())
    else:
        drink=my_menu.find_drink(choice)
        if coffeemaker.is_resource_sufficient(drink):
            if moneymachine.process_coins():
                if moneymachine.make_payment(drink):
                    coffeemaker.make_coffee(choice)
                