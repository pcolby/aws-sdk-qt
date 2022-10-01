// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARCHIVEREQUEST_P_H
#define QTAWS_DESCRIBEARCHIVEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "describearchiverequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeArchiveRequest;

class DescribeArchiveRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    DescribeArchiveRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   DescribeArchiveRequest * const q);
    DescribeArchiveRequestPrivate(const DescribeArchiveRequestPrivate &other,
                                   DescribeArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeArchiveRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
