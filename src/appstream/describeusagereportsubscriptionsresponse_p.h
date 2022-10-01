// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeUsageReportSubscriptionsResponse;

class DescribeUsageReportSubscriptionsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeUsageReportSubscriptionsResponsePrivate(DescribeUsageReportSubscriptionsResponse * const q);

    void parseDescribeUsageReportSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUsageReportSubscriptionsResponse)
    Q_DISABLE_COPY(DescribeUsageReportSubscriptionsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
