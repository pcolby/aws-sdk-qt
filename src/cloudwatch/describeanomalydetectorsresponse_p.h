// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORSRESPONSE_P_H
#define QTAWS_DESCRIBEANOMALYDETECTORSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAnomalyDetectorsResponse;

class DescribeAnomalyDetectorsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DescribeAnomalyDetectorsResponsePrivate(DescribeAnomalyDetectorsResponse * const q);

    void parseDescribeAnomalyDetectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyDetectorsResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectorsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
