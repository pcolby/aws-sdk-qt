// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONREQUEST_P_H

#include "backuprequest_p.h"
#include "putbackupvaultlockconfigurationrequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultLockConfigurationRequest;

class PutBackupVaultLockConfigurationRequestPrivate : public BackupRequestPrivate {

public:
    PutBackupVaultLockConfigurationRequestPrivate(const BackupRequest::Action action,
                                   PutBackupVaultLockConfigurationRequest * const q);
    PutBackupVaultLockConfigurationRequestPrivate(const PutBackupVaultLockConfigurationRequestPrivate &other,
                                   PutBackupVaultLockConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBackupVaultLockConfigurationRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
