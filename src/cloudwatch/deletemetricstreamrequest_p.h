// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICSTREAMREQUEST_P_H
#define QTAWS_DELETEMETRICSTREAMREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "deletemetricstreamrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteMetricStreamRequest;

class DeleteMetricStreamRequestPrivate : public CloudWatchRequestPrivate {

public:
    DeleteMetricStreamRequestPrivate(const CloudWatchRequest::Action action,
                                   DeleteMetricStreamRequest * const q);
    DeleteMetricStreamRequestPrivate(const DeleteMetricStreamRequestPrivate &other,
                                   DeleteMetricStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMetricStreamRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
