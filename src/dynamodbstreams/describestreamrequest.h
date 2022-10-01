// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMREQUEST_H
#define QTAWS_DESCRIBESTREAMREQUEST_H

#include "dynamodbstreamsrequest.h"

namespace QtAws {
namespace DynamoDbStreams {

class DescribeStreamRequestPrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT DescribeStreamRequest : public DynamoDbStreamsRequest {

public:
    DescribeStreamRequest(const DescribeStreamRequest &other);
    DescribeStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamRequest)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
