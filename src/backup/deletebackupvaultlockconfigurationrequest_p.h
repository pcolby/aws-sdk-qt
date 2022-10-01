// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONREQUEST_P_H

#include "backuprequest_p.h"
#include "deletebackupvaultlockconfigurationrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultLockConfigurationRequest;

class DeleteBackupVaultLockConfigurationRequestPrivate : public BackupRequestPrivate {

public:
    DeleteBackupVaultLockConfigurationRequestPrivate(const BackupRequest::Action action,
                                   DeleteBackupVaultLockConfigurationRequest * const q);
    DeleteBackupVaultLockConfigurationRequestPrivate(const DeleteBackupVaultLockConfigurationRequestPrivate &other,
                                   DeleteBackupVaultLockConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultLockConfigurationRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
