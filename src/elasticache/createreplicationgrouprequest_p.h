// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONGROUPREQUEST_P_H
#define QTAWS_CREATEREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateReplicationGroupRequest;

class CreateReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateReplicationGroupRequest * const q);
    CreateReplicationGroupRequestPrivate(const CreateReplicationGroupRequestPrivate &other,
                                   CreateReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
