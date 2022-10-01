// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONREQUEST_P_H
#define QTAWS_STOPDBINSTANCEAUTOMATEDBACKUPSREPLICATIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "stopdbinstanceautomatedbackupsreplicationrequest.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceAutomatedBackupsReplicationRequest;

class StopDBInstanceAutomatedBackupsReplicationRequestPrivate : public RdsRequestPrivate {

public:
    StopDBInstanceAutomatedBackupsReplicationRequestPrivate(const RdsRequest::Action action,
                                   StopDBInstanceAutomatedBackupsReplicationRequest * const q);
    StopDBInstanceAutomatedBackupsReplicationRequestPrivate(const StopDBInstanceAutomatedBackupsReplicationRequestPrivate &other,
                                   StopDBInstanceAutomatedBackupsReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDBInstanceAutomatedBackupsReplicationRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
