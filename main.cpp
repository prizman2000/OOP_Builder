#include <iostream>

enum Era {
    ancient,
    middle,
    morden
};

enum Nutrition {
    herbivorous,
    predatory,
    omnivorous
};

enum Integument {
    scales,
    dermis,
    epidermis
};

enum Protection {
    teeth,
    poison,
    spikes,
    shell,
    none
};

enum DepthLevel {
    deep,
    midle,
    shallow
};

enum Breeding {
    same,
    bisexual,
    hermaphrodite,
    gynogenesis
};

enum Colour {
    black,
    white,
    red,
    green,
    blue,
    colored
};


class Fish {
private:
    std::string name;
    unsigned int fins;
    unsigned int eyes;
    bool tail;
    Era era;
    Nutrition nutrition;
    Integument integument;
    Protection protection;
    DepthLevel depthLevel;
    Breeding breeding;
    Colour colour;
public:
    Fish(std::string name, unsigned int fins, unsigned int eyes, bool tail, Era era, Nutrition nutrition,
         Integument integument, Protection protection, DepthLevel depthLevel, Breeding breeding, Colour colour) :
            name(name), fins(fins), eyes(eyes), tail(tail), era(era), nutrition(nutrition), integument(integument),
            protection(protection), depthLevel(depthLevel), breeding(breeding), colour(colour) {}

    void showFish() {
        std::cout<<"NAME: "<<name<<std::endl;
        std::cout<<"FINS: "<<fins<<std::endl;
        std::cout<<"EYES: "<<eyes<<std::endl;
        std::cout<<"TAIL: "<<tail<<std::endl;
        std::cout<<"ERA: "<<era<<std::endl;
        std::cout<<"NUTRITION: "<<nutrition<<std::endl;
        std::cout<<"INTEGUMENT: "<<integument<<std::endl;
        std::cout<<"PROTECTION: "<<protection<<std::endl;
        std::cout<<"DEPTHLEVEL: "<<depthLevel<<std::endl;
        std::cout<<"BREEDING: "<<breeding<<std::endl;
        std::cout<<"COLOUR: "<<colour<<std::endl;

    }

};

class FishBuilder{
private:
    std::string name;
    unsigned int fins;
    unsigned int eyes;
    bool tail;
    Era era;
    Nutrition nutrition;
    Integument integument;
    Protection protection;
    DepthLevel depthLevel;
    Breeding breeding;
    Colour colour;
public:
    void setName(std::string name){
        this->name = name;
    }

    void setFins(unsigned int fins){
        this->fins = fins;
    }

    void setEyes(unsigned int eyes){
        this->eyes = eyes;
    }

    void setTail(bool tail){
        this->tail = tail;
    }

    void setEra(Era era){
        this->era = era;
    }

    void setNutrition(Nutrition nutrition){
        this->nutrition = nutrition;
    }

    void setIntegument(Integument integument){
        this->integument = integument;
    }

    void setProtection(Protection protection){
        this->protection = protection;
    }

    void setDepthLevel(DepthLevel depthLevel){
        this->depthLevel = depthLevel;
    }

    void setBreeding(Breeding breeding){
        this->breeding = breeding;
    }

    void setColour(Colour colour){
        this->colour = colour;
    }

    Fish *createFish(){
        return new Fish(name, fins, eyes, tail, era, nutrition, integument, protection, depthLevel, breeding, colour);
    }
};

int main() {

    Fish *fish;
    FishBuilder builder;
    builder.setName("Kambala");
    builder.setFins(4);
    builder.setEyes(2);
    builder.setTail(1);
    builder.setEra(Era::morden);
    builder.setNutrition(Nutrition::herbivorous);
    builder.setIntegument(Integument::scales);
    builder.setProtection(Protection::none);
    builder.setDepthLevel(DepthLevel::deep);
    builder.setBreeding(Breeding::hermaphrodite);
    builder.setColour(Colour::colored);
    fish = builder.createFish();
    fish->showFish();

    return 0;
}