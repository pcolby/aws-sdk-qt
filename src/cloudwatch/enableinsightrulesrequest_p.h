// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEINSIGHTRULESREQUEST_P_H
#define QTAWS_ENABLEINSIGHTRULESREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "enableinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class EnableInsightRulesRequest;

class EnableInsightRulesRequestPrivate : public CloudWatchRequestPrivate {

public:
    EnableInsightRulesRequestPrivate(const CloudWatchRequest::Action action,
                                   EnableInsightRulesRequest * const q);
    EnableInsightRulesRequestPrivate(const EnableInsightRulesRequestPrivate &other,
                                   EnableInsightRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
