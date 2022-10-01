// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPVAULTNOTIFICATIONSRESPONSE_H
#define QTAWS_GETBACKUPVAULTNOTIFICATIONSRESPONSE_H

#include "backupresponse.h"
#include "getbackupvaultnotificationsrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupVaultNotificationsResponsePrivate;

class QTAWSBACKUP_EXPORT GetBackupVaultNotificationsResponse : public BackupResponse {
    Q_OBJECT

public:
    GetBackupVaultNotificationsResponse(const GetBackupVaultNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackupVaultNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupVaultNotificationsResponse)
    Q_DISABLE_COPY(GetBackupVaultNotificationsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
