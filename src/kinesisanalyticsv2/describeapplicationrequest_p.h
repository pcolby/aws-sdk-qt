// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "describeapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationRequest;

class DescribeApplicationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DescribeApplicationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DescribeApplicationRequest * const q);
    DescribeApplicationRequestPrivate(const DescribeApplicationRequestPrivate &other,
                                   DescribeApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
