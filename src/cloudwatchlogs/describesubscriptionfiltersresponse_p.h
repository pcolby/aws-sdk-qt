// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONFILTERSRESPONSE_P_H
#define QTAWS_DESCRIBESUBSCRIPTIONFILTERSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeSubscriptionFiltersResponse;

class DescribeSubscriptionFiltersResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeSubscriptionFiltersResponsePrivate(DescribeSubscriptionFiltersResponse * const q);

    void parseDescribeSubscriptionFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubscriptionFiltersResponse)
    Q_DISABLE_COPY(DescribeSubscriptionFiltersResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
