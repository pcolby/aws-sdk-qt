// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONREQUEST_H
#define QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeKinesisStreamingDestinationRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeKinesisStreamingDestinationRequest : public DynamoDbRequest {

public:
    DescribeKinesisStreamingDestinationRequest(const DescribeKinesisStreamingDestinationRequest &other);
    DescribeKinesisStreamingDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKinesisStreamingDestinationRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
