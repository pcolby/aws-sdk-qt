// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDSREQUEST_P_H
#define QTAWS_LISTDASHBOARDSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "listdashboardsrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListDashboardsRequest;

class ListDashboardsRequestPrivate : public CloudWatchRequestPrivate {

public:
    ListDashboardsRequestPrivate(const CloudWatchRequest::Action action,
                                   ListDashboardsRequest * const q);
    ListDashboardsRequestPrivate(const ListDashboardsRequestPrivate &other,
                                   ListDashboardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDashboardsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
