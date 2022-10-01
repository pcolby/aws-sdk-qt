// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRULEREPORTREQUEST_P_H
#define QTAWS_GETINSIGHTRULEREPORTREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "getinsightrulereportrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetInsightRuleReportRequest;

class GetInsightRuleReportRequestPrivate : public CloudWatchRequestPrivate {

public:
    GetInsightRuleReportRequestPrivate(const CloudWatchRequest::Action action,
                                   GetInsightRuleReportRequest * const q);
    GetInsightRuleReportRequestPrivate(const GetInsightRuleReportRequestPrivate &other,
                                   GetInsightRuleReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightRuleReportRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
