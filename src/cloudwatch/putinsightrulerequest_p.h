// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTRULEREQUEST_P_H
#define QTAWS_PUTINSIGHTRULEREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putinsightrulerequest.h"

namespace QtAws {
namespace CloudWatch {

class PutInsightRuleRequest;

class PutInsightRuleRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutInsightRuleRequestPrivate(const CloudWatchRequest::Action action,
                                   PutInsightRuleRequest * const q);
    PutInsightRuleRequestPrivate(const PutInsightRuleRequestPrivate &other,
                                   PutInsightRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutInsightRuleRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
