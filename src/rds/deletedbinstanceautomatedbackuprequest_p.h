// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPREQUEST_P_H
#define QTAWS_DELETEDBINSTANCEAUTOMATEDBACKUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbinstanceautomatedbackuprequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBInstanceAutomatedBackupRequest;

class DeleteDBInstanceAutomatedBackupRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBInstanceAutomatedBackupRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBInstanceAutomatedBackupRequest * const q);
    DeleteDBInstanceAutomatedBackupRequestPrivate(const DeleteDBInstanceAutomatedBackupRequestPrivate &other,
                                   DeleteDBInstanceAutomatedBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBInstanceAutomatedBackupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
