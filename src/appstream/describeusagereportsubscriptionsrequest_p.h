// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEUSAGEREPORTSUBSCRIPTIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeusagereportsubscriptionsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeUsageReportSubscriptionsRequest;

class DescribeUsageReportSubscriptionsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeUsageReportSubscriptionsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeUsageReportSubscriptionsRequest * const q);
    DescribeUsageReportSubscriptionsRequestPrivate(const DescribeUsageReportSubscriptionsRequestPrivate &other,
                                   DescribeUsageReportSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUsageReportSubscriptionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
