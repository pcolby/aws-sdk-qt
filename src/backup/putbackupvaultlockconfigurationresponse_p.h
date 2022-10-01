// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultLockConfigurationResponse;

class PutBackupVaultLockConfigurationResponsePrivate : public BackupResponsePrivate {

public:

    explicit PutBackupVaultLockConfigurationResponsePrivate(PutBackupVaultLockConfigurationResponse * const q);

    void parsePutBackupVaultLockConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBackupVaultLockConfigurationResponse)
    Q_DISABLE_COPY(PutBackupVaultLockConfigurationResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
