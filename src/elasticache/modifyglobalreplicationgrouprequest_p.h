// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_MODIFYGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifyglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyGlobalReplicationGroupRequest;

class ModifyGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyGlobalReplicationGroupRequest * const q);
    ModifyGlobalReplicationGroupRequestPrivate(const ModifyGlobalReplicationGroupRequestPrivate &other,
                                   ModifyGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
