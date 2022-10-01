// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEINSIGHTRULESREQUEST_P_H
#define QTAWS_DISABLEINSIGHTRULESREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "disableinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class DisableInsightRulesRequest;

class DisableInsightRulesRequestPrivate : public CloudWatchRequestPrivate {

public:
    DisableInsightRulesRequestPrivate(const CloudWatchRequest::Action action,
                                   DisableInsightRulesRequest * const q);
    DisableInsightRulesRequestPrivate(const DisableInsightRulesRequestPrivate &other,
                                   DisableInsightRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
