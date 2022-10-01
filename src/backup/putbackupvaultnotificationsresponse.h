// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTNOTIFICATIONSRESPONSE_H
#define QTAWS_PUTBACKUPVAULTNOTIFICATIONSRESPONSE_H

#include "backupresponse.h"
#include "putbackupvaultnotificationsrequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultNotificationsResponsePrivate;

class QTAWSBACKUP_EXPORT PutBackupVaultNotificationsResponse : public BackupResponse {
    Q_OBJECT

public:
    PutBackupVaultNotificationsResponse(const PutBackupVaultNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBackupVaultNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupVaultNotificationsResponse)
    Q_DISABLE_COPY(PutBackupVaultNotificationsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
