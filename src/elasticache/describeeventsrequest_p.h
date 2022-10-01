// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeEventsRequest;

class DescribeEventsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeEventsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeEventsRequest * const q);
    DescribeEventsRequestPrivate(const DescribeEventsRequestPrivate &other,
                                   DescribeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
