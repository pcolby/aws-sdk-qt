// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_CREATEGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateGlobalReplicationGroupRequest;

class CreateGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateGlobalReplicationGroupRequest * const q);
    CreateGlobalReplicationGroupRequestPrivate(const CreateGlobalReplicationGroupRequestPrivate &other,
                                   CreateGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
