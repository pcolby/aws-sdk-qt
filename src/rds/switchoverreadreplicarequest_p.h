// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWITCHOVERREADREPLICAREQUEST_P_H
#define QTAWS_SWITCHOVERREADREPLICAREQUEST_P_H

#include "rdsrequest_p.h"
#include "switchoverreadreplicarequest.h"

namespace QtAws {
namespace Rds {

class SwitchoverReadReplicaRequest;

class SwitchoverReadReplicaRequestPrivate : public RdsRequestPrivate {

public:
    SwitchoverReadReplicaRequestPrivate(const RdsRequest::Action action,
                                   SwitchoverReadReplicaRequest * const q);
    SwitchoverReadReplicaRequestPrivate(const SwitchoverReadReplicaRequestPrivate &other,
                                   SwitchoverReadReplicaRequest * const q);

private:
    Q_DECLARE_PUBLIC(SwitchoverReadReplicaRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
