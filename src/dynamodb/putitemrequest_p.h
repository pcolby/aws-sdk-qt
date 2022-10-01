// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMREQUEST_P_H
#define QTAWS_PUTITEMREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "putitemrequest.h"

namespace QtAws {
namespace DynamoDb {

class PutItemRequest;

class PutItemRequestPrivate : public DynamoDbRequestPrivate {

public:
    PutItemRequestPrivate(const DynamoDbRequest::Action action,
                                   PutItemRequest * const q);
    PutItemRequestPrivate(const PutItemRequestPrivate &other,
                                   PutItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutItemRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
