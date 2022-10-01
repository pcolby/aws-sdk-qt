// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "describeapplicationversionrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationVersionRequest;

class DescribeApplicationVersionRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DescribeApplicationVersionRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DescribeApplicationVersionRequest * const q);
    DescribeApplicationVersionRequestPrivate(const DescribeApplicationVersionRequestPrivate &other,
                                   DescribeApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationVersionRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
