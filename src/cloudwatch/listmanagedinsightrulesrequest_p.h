// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDINSIGHTRULESREQUEST_P_H
#define QTAWS_LISTMANAGEDINSIGHTRULESREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "listmanagedinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListManagedInsightRulesRequest;

class ListManagedInsightRulesRequestPrivate : public CloudWatchRequestPrivate {

public:
    ListManagedInsightRulesRequestPrivate(const CloudWatchRequest::Action action,
                                   ListManagedInsightRulesRequest * const q);
    ListManagedInsightRulesRequestPrivate(const ListManagedInsightRulesRequestPrivate &other,
                                   ListManagedInsightRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
