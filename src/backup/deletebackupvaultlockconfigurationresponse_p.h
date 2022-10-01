// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultLockConfigurationResponse;

class DeleteBackupVaultLockConfigurationResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteBackupVaultLockConfigurationResponsePrivate(DeleteBackupVaultLockConfigurationResponse * const q);

    void parseDeleteBackupVaultLockConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultLockConfigurationResponse)
    Q_DISABLE_COPY(DeleteBackupVaultLockConfigurationResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
