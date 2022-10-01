// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMRESPONSE_P_H
#define QTAWS_DESCRIBESTREAMRESPONSE_P_H

#include "dynamodbstreamsresponse_p.h"

namespace QtAws {
namespace DynamoDbStreams {

class DescribeStreamResponse;

class DescribeStreamResponsePrivate : public DynamoDbStreamsResponsePrivate {

public:

    explicit DescribeStreamResponsePrivate(DescribeStreamResponse * const q);

    void parseDescribeStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStreamResponse)
    Q_DISABLE_COPY(DescribeStreamResponsePrivate)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
