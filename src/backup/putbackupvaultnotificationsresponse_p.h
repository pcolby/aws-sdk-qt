// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_PUTBACKUPVAULTNOTIFICATIONSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultNotificationsResponse;

class PutBackupVaultNotificationsResponsePrivate : public BackupResponsePrivate {

public:

    explicit PutBackupVaultNotificationsResponsePrivate(PutBackupVaultNotificationsResponse * const q);

    void parsePutBackupVaultNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBackupVaultNotificationsResponse)
    Q_DISABLE_COPY(PutBackupVaultNotificationsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
