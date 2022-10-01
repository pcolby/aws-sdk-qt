// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICADBCLUSTERREQUEST_P_H
#define QTAWS_PROMOTEREADREPLICADBCLUSTERREQUEST_P_H

#include "rdsrequest_p.h"
#include "promotereadreplicadbclusterrequest.h"

namespace QtAws {
namespace Rds {

class PromoteReadReplicaDBClusterRequest;

class PromoteReadReplicaDBClusterRequestPrivate : public RdsRequestPrivate {

public:
    PromoteReadReplicaDBClusterRequestPrivate(const RdsRequest::Action action,
                                   PromoteReadReplicaDBClusterRequest * const q);
    PromoteReadReplicaDBClusterRequestPrivate(const PromoteReadReplicaDBClusterRequestPrivate &other,
                                   PromoteReadReplicaDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PromoteReadReplicaDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
