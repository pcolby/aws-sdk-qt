// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONRESPONSE_H

#include "backupresponse.h"
#include "deletebackupvaultlockconfigurationrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultLockConfigurationResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultLockConfigurationResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteBackupVaultLockConfigurationResponse(const DeleteBackupVaultLockConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupVaultLockConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultLockConfigurationResponse)
    Q_DISABLE_COPY(DeleteBackupVaultLockConfigurationResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
