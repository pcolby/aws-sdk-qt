// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSHARDITERATORREQUEST_H
#define QTAWS_GETSHARDITERATORREQUEST_H

#include "dynamodbstreamsrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetShardIteratorRequestPrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT GetShardIteratorRequest : public DynamoDbStreamsRequest {

public:
    GetShardIteratorRequest(const GetShardIteratorRequest &other);
    GetShardIteratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetShardIteratorRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
