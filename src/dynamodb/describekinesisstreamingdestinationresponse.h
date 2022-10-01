// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONRESPONSE_H
#define QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONRESPONSE_H

#include "dynamodbresponse.h"
#include "describekinesisstreamingdestinationrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeKinesisStreamingDestinationResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeKinesisStreamingDestinationResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeKinesisStreamingDestinationResponse(const DescribeKinesisStreamingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeKinesisStreamingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKinesisStreamingDestinationResponse)
    Q_DISABLE_COPY(DescribeKinesisStreamingDestinationResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
