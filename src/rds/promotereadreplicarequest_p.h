// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTEREADREPLICAREQUEST_P_H
#define QTAWS_PROMOTEREADREPLICAREQUEST_P_H

#include "rdsrequest_p.h"
#include "promotereadreplicarequest.h"

namespace QtAws {
namespace Rds {

class PromoteReadReplicaRequest;

class PromoteReadReplicaRequestPrivate : public RdsRequestPrivate {

public:
    PromoteReadReplicaRequestPrivate(const RdsRequest::Action action,
                                   PromoteReadReplicaRequest * const q);
    PromoteReadReplicaRequestPrivate(const PromoteReadReplicaRequestPrivate &other,
                                   PromoteReadReplicaRequest * const q);

private:
    Q_DECLARE_PUBLIC(PromoteReadReplicaRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
