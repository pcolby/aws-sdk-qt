// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTETRANSACTIONREQUEST_P_H
#define QTAWS_EXECUTETRANSACTIONREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "executetransactionrequest.h"

namespace QtAws {
namespace DynamoDb {

class ExecuteTransactionRequest;

class ExecuteTransactionRequestPrivate : public DynamoDbRequestPrivate {

public:
    ExecuteTransactionRequestPrivate(const DynamoDbRequest::Action action,
                                   ExecuteTransactionRequest * const q);
    ExecuteTransactionRequestPrivate(const ExecuteTransactionRequestPrivate &other,
                                   ExecuteTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteTransactionRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
