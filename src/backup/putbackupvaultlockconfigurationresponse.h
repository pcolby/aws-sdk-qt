// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONRESPONSE_H

#include "backupresponse.h"
#include "putbackupvaultlockconfigurationrequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultLockConfigurationResponsePrivate;

class QTAWSBACKUP_EXPORT PutBackupVaultLockConfigurationResponse : public BackupResponse {
    Q_OBJECT

public:
    PutBackupVaultLockConfigurationResponse(const PutBackupVaultLockConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBackupVaultLockConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupVaultLockConfigurationResponse)
    Q_DISABLE_COPY(PutBackupVaultLockConfigurationResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
