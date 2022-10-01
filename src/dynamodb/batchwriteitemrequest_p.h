// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITEITEMREQUEST_P_H
#define QTAWS_BATCHWRITEITEMREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "batchwriteitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class BatchWriteItemRequest;

class BatchWriteItemRequestPrivate : public DynamoDbRequestPrivate {

public:
    BatchWriteItemRequestPrivate(const DynamoDbRequest::Action action,
                                   BatchWriteItemRequest * const q);
    BatchWriteItemRequestPrivate(const BatchWriteItemRequestPrivate &other,
                                   BatchWriteItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchWriteItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
