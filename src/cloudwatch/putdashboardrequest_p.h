// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDASHBOARDREQUEST_P_H
#define QTAWS_PUTDASHBOARDREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putdashboardrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutDashboardRequest;

class PutDashboardRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutDashboardRequestPrivate(const CloudWatchRequest::Action action,
                                   PutDashboardRequest * const q);
    PutDashboardRequestPrivate(const PutDashboardRequestPrivate &other,
                                   PutDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDashboardRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
