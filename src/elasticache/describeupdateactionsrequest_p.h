// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATEACTIONSREQUEST_P_H
#define QTAWS_DESCRIBEUPDATEACTIONSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describeupdateactionsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUpdateActionsRequest;

class DescribeUpdateActionsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeUpdateActionsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeUpdateActionsRequest * const q);
    DescribeUpdateActionsRequestPrivate(const DescribeUpdateActionsRequestPrivate &other,
                                   DescribeUpdateActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUpdateActionsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
