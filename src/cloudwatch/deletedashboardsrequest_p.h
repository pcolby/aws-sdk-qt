// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDSREQUEST_P_H
#define QTAWS_DELETEDASHBOARDSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "deletedashboardsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteDashboardsRequest;

class DeleteDashboardsRequestPrivate : public CloudWatchRequestPrivate {

public:
    DeleteDashboardsRequestPrivate(const CloudWatchRequest::Action action,
                                   DeleteDashboardsRequest * const q);
    DeleteDashboardsRequestPrivate(const DeleteDashboardsRequestPrivate &other,
                                   DeleteDashboardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDashboardsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
