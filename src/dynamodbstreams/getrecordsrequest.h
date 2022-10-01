// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDSREQUEST_H
#define QTAWS_GETRECORDSREQUEST_H

#include "dynamodbstreamsrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class GetRecordsRequestPrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT GetRecordsRequest : public DynamoDbStreamsRequest {

public:
    GetRecordsRequest(const GetRecordsRequest &other);
    GetRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecordsRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
