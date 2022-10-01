// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORRESPONSE_P_H
#define QTAWS_DESCRIBEANOMALYDETECTORRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectorResponse;

class DescribeAnomalyDetectorResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DescribeAnomalyDetectorResponsePrivate(DescribeAnomalyDetectorResponse * const q);

    void parseDescribeAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyDetectorResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectorResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
