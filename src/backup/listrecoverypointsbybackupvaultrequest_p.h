// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTREQUEST_P_H
#define QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTREQUEST_P_H

#include "backuprequest_p.h"
#include "listrecoverypointsbybackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByBackupVaultRequest;

class ListRecoveryPointsByBackupVaultRequestPrivate : public BackupRequestPrivate {

public:
    ListRecoveryPointsByBackupVaultRequestPrivate(const BackupRequest::Action action,
                                   ListRecoveryPointsByBackupVaultRequest * const q);
    ListRecoveryPointsByBackupVaultRequestPrivate(const ListRecoveryPointsByBackupVaultRequestPrivate &other,
                                   ListRecoveryPointsByBackupVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecoveryPointsByBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
