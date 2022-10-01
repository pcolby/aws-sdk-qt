// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYSTREAMRESPONSE_P_H
#define QTAWS_DESCRIBEDELIVERYSTREAMRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class DescribeDeliveryStreamResponse;

class DescribeDeliveryStreamResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit DescribeDeliveryStreamResponsePrivate(DescribeDeliveryStreamResponse * const q);

    void parseDescribeDeliveryStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryStreamResponse)
    Q_DISABLE_COPY(DescribeDeliveryStreamResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
