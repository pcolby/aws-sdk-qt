// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "disassociateglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DisassociateGlobalReplicationGroupRequest;

class DisassociateGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DisassociateGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DisassociateGlobalReplicationGroupRequest * const q);
    DisassociateGlobalReplicationGroupRequestPrivate(const DisassociateGlobalReplicationGroupRequestPrivate &other,
                                   DisassociateGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
