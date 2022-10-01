// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_FAILOVERGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "failoverglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class FailoverGlobalReplicationGroupRequest;

class FailoverGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    FailoverGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   FailoverGlobalReplicationGroupRequest * const q);
    FailoverGlobalReplicationGroupRequestPrivate(const FailoverGlobalReplicationGroupRequestPrivate &other,
                                   FailoverGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(FailoverGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
