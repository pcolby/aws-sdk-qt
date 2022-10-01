// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPVAULTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_GETBACKUPVAULTNOTIFICATIONSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetBackupVaultNotificationsResponse;

class GetBackupVaultNotificationsResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetBackupVaultNotificationsResponsePrivate(GetBackupVaultNotificationsResponse * const q);

    void parseGetBackupVaultNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackupVaultNotificationsResponse)
    Q_DISABLE_COPY(GetBackupVaultNotificationsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
