// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICFILTERREQUEST_P_H
#define QTAWS_DELETEMETRICFILTERREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deletemetricfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteMetricFilterRequest;

class DeleteMetricFilterRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteMetricFilterRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteMetricFilterRequest * const q);
    DeleteMetricFilterRequestPrivate(const DeleteMetricFilterRequestPrivate &other,
                                   DeleteMetricFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMetricFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
