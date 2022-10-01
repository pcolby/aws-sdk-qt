// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREDBINSTANCEFROMDBSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "restoredbinstancefromdbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromDBSnapshotRequest;

class RestoreDBInstanceFromDBSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    RestoreDBInstanceFromDBSnapshotRequestPrivate(const RdsRequest::Action action,
                                   RestoreDBInstanceFromDBSnapshotRequest * const q);
    RestoreDBInstanceFromDBSnapshotRequestPrivate(const RestoreDBInstanceFromDBSnapshotRequestPrivate &other,
                                   RestoreDBInstanceFromDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceFromDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
