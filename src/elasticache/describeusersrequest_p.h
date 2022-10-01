// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSREQUEST_P_H
#define QTAWS_DESCRIBEUSERSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describeusersrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUsersRequest;

class DescribeUsersRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeUsersRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeUsersRequest * const q);
    DescribeUsersRequestPrivate(const DescribeUsersRequestPrivate &other,
                                   DescribeUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUsersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
