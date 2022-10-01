// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSACTGETITEMSREQUEST_P_H
#define QTAWS_TRANSACTGETITEMSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "transactgetitemsrequest.h"

namespace QtAws {
namespace DynamoDb {

class TransactGetItemsRequest;

class TransactGetItemsRequestPrivate : public DynamoDbRequestPrivate {

public:
    TransactGetItemsRequestPrivate(const DynamoDbRequest::Action action,
                                   TransactGetItemsRequest * const q);
    TransactGetItemsRequestPrivate(const TransactGetItemsRequestPrivate &other,
                                   TransactGetItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransactGetItemsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
