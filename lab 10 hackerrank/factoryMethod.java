interface drink{

}

class cocacola implements drink{

}

class pepsi implements drink{

}

enum DrinkType{
    pepsi,cocacola

}

class drinkFactory{
    private static drinkFactory factory =null;
    private drinkFactory(){}

    static drinkFactory getDrinkfactory(){
        if (factory==null){
            factory = new drinkFactory();
            return factory;
        }
        else {
            return factory;
        }
    }

    public drink getDrink(DrinkType type){
        switch (type){
            case pepsi:
                return new pepsi();
            case cocacola:
                return new cocacola();
            default:
                return null;
        }

    }
}


public class factoryMethod {
    drink drink1 = drinkFactory.getDrinkfactory().getDrink(DrinkType.pepsi);
}

