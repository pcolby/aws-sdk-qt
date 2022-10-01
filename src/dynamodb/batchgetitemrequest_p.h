// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETITEMREQUEST_P_H
#define QTAWS_BATCHGETITEMREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "batchgetitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class BatchGetItemRequest;

class BatchGetItemRequestPrivate : public DynamoDbRequestPrivate {

public:
    BatchGetItemRequestPrivate(const DynamoDbRequest::Action action,
                                   BatchGetItemRequest * const q);
    BatchGetItemRequestPrivate(const BatchGetItemRequestPrivate &other,
                                   BatchGetItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
