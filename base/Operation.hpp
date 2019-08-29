/******************************************************************************
* File:             Operation.hpp
*
* Author:           CJ  
* Created:          06/21/19 
*                   the interface of the operation
*****************************************************************************/
#ifndef OPERATION_HPP
#define OPERATION_HPP
#include <boost/algorithm/string.hpp>
#include <framework/Doc.hpp>

typedef int64 OperationID;

class Operation{
    public:

    public:
        Operation();
        virtual ~Operation();
    public:
        Operation(const Operation& other);
        Operation(Operation&& rv);
    public:
        /*
         * this function return the id of the operation*/
        virtual OperationID ID() const;
        /*
         * this function return the name of the operation*/
        virtual boost::string Name() const;
        /*
         * this function return the doc of the operation*/
        virtual Doc Doc() const;
    public:
        
    
}

#endif /* end of include guard: OPERATION_HPP */
