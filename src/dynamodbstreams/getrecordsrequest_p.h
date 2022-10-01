// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDSREQUEST_P_H
#define QTAWS_GETRECORDSREQUEST_P_H

#include "dynamodbstreamsrequest_p.h"
#include "getrecordsrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetRecordsRequest;

class GetRecordsRequestPrivate : public DynamoDbStreamsRequestPrivate {

public:
    GetRecordsRequestPrivate(const DynamoDbStreamsRequest::Action action,
                                   GetRecordsRequest * const q);
    GetRecordsRequestPrivate(const GetRecordsRequestPrivate &other,
                                   GetRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecordsRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
