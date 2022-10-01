// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSHARDITERATORREQUEST_P_H
#define QTAWS_GETSHARDITERATORREQUEST_P_H

#include "dynamodbstreamsrequest_p.h"
#include "getsharditeratorrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetShardIteratorRequest;

class GetShardIteratorRequestPrivate : public DynamoDbStreamsRequestPrivate {

public:
    GetShardIteratorRequestPrivate(const DynamoDbStreamsRequest::Action action,
                                   GetShardIteratorRequest * const q);
    GetShardIteratorRequestPrivate(const GetShardIteratorRequestPrivate &other,
                                   GetShardIteratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetShardIteratorRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
