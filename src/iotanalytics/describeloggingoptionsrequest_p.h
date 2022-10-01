// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "describeloggingoptionsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeLoggingOptionsRequest;

class DescribeLoggingOptionsRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    DescribeLoggingOptionsRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   DescribeLoggingOptionsRequest * const q);
    DescribeLoggingOptionsRequestPrivate(const DescribeLoggingOptionsRequestPrivate &other,
                                   DescribeLoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingOptionsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
