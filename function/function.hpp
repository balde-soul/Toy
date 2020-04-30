#ifndef PROJECT_BASE_FUNCTION_FUNCTION_H
#define PROJECT_BASE_FUNCTION_FUNCTION_H
#include <string>
#include <Toy/function/Define.hpp>
#include <Toy/data/data.hpp>
#include <Toy/data/data_container.hpp>

namespace Toy{
    namespace function{
        typedef std::string FUNCTION_NAME;
        class TOY_FUNCTION_SYMBOL Function
        {
            public:
                Function(/* args */);
                ~Function();
            public:
                Toy::function::DataContainer& data_container() const;
                void executa() const;
            protected:
                /* data */
                
        };
    }
}
#endif // !1PROJECT_BASE_FUNCTION_H