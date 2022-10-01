// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICFILTERSRESPONSE_P_H
#define QTAWS_DESCRIBEMETRICFILTERSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeMetricFiltersResponse;

class DescribeMetricFiltersResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeMetricFiltersResponsePrivate(DescribeMetricFiltersResponse * const q);

    void parseDescribeMetricFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMetricFiltersResponse)
    Q_DISABLE_COPY(DescribeMetricFiltersResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
