// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describesnapshotsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeSnapshotsRequest;

class DescribeSnapshotsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeSnapshotsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeSnapshotsRequest * const q);
    DescribeSnapshotsRequestPrivate(const DescribeSnapshotsRequestPrivate &other,
                                   DescribeSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
