// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTWRITEITEMSREQUEST_P_H
#define QTAWS_TRANSACTWRITEITEMSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "transactwriteitemsrequest.h"

namespace QtAws {
namespace DynamoDb {

class TransactWriteItemsRequest;

class TransactWriteItemsRequestPrivate : public DynamoDbRequestPrivate {

public:
    TransactWriteItemsRequestPrivate(const DynamoDbRequest::Action action,
                                   TransactWriteItemsRequest * const q);
    TransactWriteItemsRequestPrivate(const TransactWriteItemsRequestPrivate &other,
                                   TransactWriteItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransactWriteItemsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
