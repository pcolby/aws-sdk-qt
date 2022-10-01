// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDREQUEST_P_H
#define QTAWS_GETDASHBOARDREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "getdashboardrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetDashboardRequest;

class GetDashboardRequestPrivate : public CloudWatchRequestPrivate {

public:
    GetDashboardRequestPrivate(const CloudWatchRequest::Action action,
                                   GetDashboardRequest * const q);
    GetDashboardRequestPrivate(const GetDashboardRequestPrivate &other,
                                   GetDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDashboardRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
