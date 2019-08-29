/******************************************************************************
* File:             Doc.cpp
*
* Author:           CJ  
* Created:          06/24/19 
*                   the interface of the Doc
*****************************************************************************/

#ifndef DOC_HPP
#define DOC_HPP
#include <string>

class Doc{
    public:
        Doc();
        virtual ~Doc();
    public:
        Doc(const Doc& other);
        Doc(Doc&& rv);
    public:
        std::string operator() const;
}
#endif /* ifndef DOC_HPP */
