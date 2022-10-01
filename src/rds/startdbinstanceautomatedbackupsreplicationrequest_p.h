// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCEAUTOMATEDBACKUPSREPLICATIONREQUEST_P_H
#define QTAWS_STARTDBINSTANCEAUTOMATEDBACKUPSREPLICATIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "startdbinstanceautomatedbackupsreplicationrequest.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceAutomatedBackupsReplicationRequest;

class StartDBInstanceAutomatedBackupsReplicationRequestPrivate : public RdsRequestPrivate {

public:
    StartDBInstanceAutomatedBackupsReplicationRequestPrivate(const RdsRequest::Action action,
                                   StartDBInstanceAutomatedBackupsReplicationRequest * const q);
    StartDBInstanceAutomatedBackupsReplicationRequestPrivate(const StartDBInstanceAutomatedBackupsReplicationRequestPrivate &other,
                                   StartDBInstanceAutomatedBackupsReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDBInstanceAutomatedBackupsReplicationRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
