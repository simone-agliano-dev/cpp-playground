#include <memory>
#include <iostream>
#include <string>

class Entity
{
    public:
    Entity(){
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }
    void Print(){}

};

int main()
{
    {
        std::unique_ptr<Entity>  entity = std::make_unique<Entity>(); //construct is already implicity, exception safety  and creates an unique pointer in order to not copy it because once we go out the scope it will be destroyed and the copied pointer will point to an empty memory
        entity->Print();
    }
    std::cin.get();
}