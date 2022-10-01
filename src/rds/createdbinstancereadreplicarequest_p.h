// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCEREADREPLICAREQUEST_P_H
#define QTAWS_CREATEDBINSTANCEREADREPLICAREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbinstancereadreplicarequest.h"

namespace QtAws {
namespace Rds {

class CreateDBInstanceReadReplicaRequest;

class CreateDBInstanceReadReplicaRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBInstanceReadReplicaRequestPrivate(const RdsRequest::Action action,
                                   CreateDBInstanceReadReplicaRequest * const q);
    CreateDBInstanceReadReplicaRequestPrivate(const CreateDBInstanceReadReplicaRequestPrivate &other,
                                   CreateDBInstanceReadReplicaRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBInstanceReadReplicaRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
