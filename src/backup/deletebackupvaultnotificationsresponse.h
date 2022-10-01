// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTNOTIFICATIONSRESPONSE_H
#define QTAWS_DELETEBACKUPVAULTNOTIFICATIONSRESPONSE_H

#include "backupresponse.h"
#include "deletebackupvaultnotificationsrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultNotificationsResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultNotificationsResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteBackupVaultNotificationsResponse(const DeleteBackupVaultNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupVaultNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultNotificationsResponse)
    Q_DISABLE_COPY(DeleteBackupVaultNotificationsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
