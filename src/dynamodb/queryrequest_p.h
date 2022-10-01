// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYREQUEST_P_H
#define QTAWS_QUERYREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "queryrequest.h"

namespace QtAws {
namespace DynamoDb {

class QueryRequest;

class QueryRequestPrivate : public DynamoDbRequestPrivate {

public:
    QueryRequestPrivate(const DynamoDbRequest::Action action,
                                   QueryRequest * const q);
    QueryRequestPrivate(const QueryRequestPrivate &other,
                                   QueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
