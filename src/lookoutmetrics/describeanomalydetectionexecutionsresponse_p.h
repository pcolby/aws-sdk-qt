// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectionExecutionsResponse;

class DescribeAnomalyDetectionExecutionsResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DescribeAnomalyDetectionExecutionsResponsePrivate(DescribeAnomalyDetectionExecutionsResponse * const q);

    void parseDescribeAnomalyDetectionExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyDetectionExecutionsResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectionExecutionsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
