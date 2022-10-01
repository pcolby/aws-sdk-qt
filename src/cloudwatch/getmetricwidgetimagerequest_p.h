// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICWIDGETIMAGEREQUEST_P_H
#define QTAWS_GETMETRICWIDGETIMAGEREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "getmetricwidgetimagerequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricWidgetImageRequest;

class GetMetricWidgetImageRequestPrivate : public CloudWatchRequestPrivate {

public:
    GetMetricWidgetImageRequestPrivate(const CloudWatchRequest::Action action,
                                   GetMetricWidgetImageRequest * const q);
    GetMetricWidgetImageRequestPrivate(const GetMetricWidgetImageRequestPrivate &other,
                                   GetMetricWidgetImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMetricWidgetImageRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
