/**
 * @file    Transaction.cpp
 * @ingroup SQLiteCpp
 * @brief   A Transaction is way to group multiple SQL statements into an atomic secured operation.
 *
 * Copyright (c) 2012-2013 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#include "../include/Transaction.h"

#include "../include/Database.h"
#include "../include/Assertion.h"

namespace SQLite
{


// Begins the SQLite transaction
Transaction::Transaction(Database& aDatabase) :
    mDatabase(aDatabase),
    mbCommited(false)
{
    mDatabase.exec("BEGIN");
}

// Safely rollback the transaction if it has not been committed.
Transaction::~Transaction() noexcept // nothrow
{
    if (false == mbCommited)
    {
        try
        {
            mDatabase.exec("ROLLBACK");
        }
        catch (SQLite::Exception& e)
        {
            // Never throw an exception in a destructor
            (void)e; // warning proof
            SQLITECPP_ASSERT(false, e.what());  // See SQLITECPP_ENABLE_ASSERT_HANDLER
        }
    }
}

// Commit the transaction.
void Transaction::commit()
{
    if (false == mbCommited)
    {
        mDatabase.exec("COMMIT");
        mbCommited = true;
    }
    else
    {
        throw SQLite::Exception("Transaction already commited.");
    }
}


}  // namespace SQLite
