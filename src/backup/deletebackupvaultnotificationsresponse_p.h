// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_DELETEBACKUPVAULTNOTIFICATIONSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultNotificationsResponse;

class DeleteBackupVaultNotificationsResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteBackupVaultNotificationsResponsePrivate(DeleteBackupVaultNotificationsResponse * const q);

    void parseDeleteBackupVaultNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultNotificationsResponse)
    Q_DISABLE_COPY(DeleteBackupVaultNotificationsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
