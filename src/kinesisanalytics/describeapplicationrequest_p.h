// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "describeapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DescribeApplicationRequest;

class DescribeApplicationRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    DescribeApplicationRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   DescribeApplicationRequest * const q);
    DescribeApplicationRequestPrivate(const DescribeApplicationRequestPrivate &other,
                                   DescribeApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
