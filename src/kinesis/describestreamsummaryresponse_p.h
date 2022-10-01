// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMSUMMARYRESPONSE_P_H
#define QTAWS_DESCRIBESTREAMSUMMARYRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamSummaryResponse;

class DescribeStreamSummaryResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DescribeStreamSummaryResponsePrivate(DescribeStreamSummaryResponse * const q);

    void parseDescribeStreamSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStreamSummaryResponse)
    Q_DISABLE_COPY(DescribeStreamSummaryResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
