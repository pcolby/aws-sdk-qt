// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONRESPONSE_P_H
#define QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeKinesisStreamingDestinationResponse;

class DescribeKinesisStreamingDestinationResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeKinesisStreamingDestinationResponsePrivate(DescribeKinesisStreamingDestinationResponse * const q);

    void parseDescribeKinesisStreamingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeKinesisStreamingDestinationResponse)
    Q_DISABLE_COPY(DescribeKinesisStreamingDestinationResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
