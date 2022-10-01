// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICSETRESPONSE_P_H
#define QTAWS_DESCRIBEMETRICSETRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeMetricSetResponse;

class DescribeMetricSetResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DescribeMetricSetResponsePrivate(DescribeMetricSetResponse * const q);

    void parseDescribeMetricSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMetricSetResponse)
    Q_DISABLE_COPY(DescribeMetricSetResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
