// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDINSIGHTRULESREQUEST_P_H
#define QTAWS_PUTMANAGEDINSIGHTRULESREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putmanagedinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutManagedInsightRulesRequest;

class PutManagedInsightRulesRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutManagedInsightRulesRequestPrivate(const CloudWatchRequest::Action action,
                                   PutManagedInsightRulesRequest * const q);
    PutManagedInsightRulesRequestPrivate(const PutManagedInsightRulesRequestPrivate &other,
                                   PutManagedInsightRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutManagedInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
