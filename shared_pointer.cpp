#include <memory>
#include <iostream>
#include <string>

// shared pointer has a counter to count the number of references
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
    std::shared_ptr<Entity> e0;
    {
        std::shared_ptr<Entity>  sharedEntity = std::make_shared<Entity>(); //allocates another block of memory called Control Block where it stores the reference count. If you do the unique_pointer and you pass to the shared pointer constructore, it actually does two allocations, one for the unire pointer and the second one for the Control block, whereas if you create te shared pointer it construcs together and it's a lot more efficent
        e0 = sharedEntity;
    }
    //when the above scope dies, the memory is not de-allocated because e0 is still alive holding my entity type
    std::cin.get();
}
