// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPREQUEST_P_H
#define QTAWS_MODIFYREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifyreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupRequest;

class ModifyReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyReplicationGroupRequest * const q);
    ModifyReplicationGroupRequestPrivate(const ModifyReplicationGroupRequestPrivate &other,
                                   ModifyReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
