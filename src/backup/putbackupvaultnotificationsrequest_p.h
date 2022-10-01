// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_PUTBACKUPVAULTNOTIFICATIONSREQUEST_P_H

#include "backuprequest_p.h"
#include "putbackupvaultnotificationsrequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultNotificationsRequest;

class PutBackupVaultNotificationsRequestPrivate : public BackupRequestPrivate {

public:
    PutBackupVaultNotificationsRequestPrivate(const BackupRequest::Action action,
                                   PutBackupVaultNotificationsRequest * const q);
    PutBackupVaultNotificationsRequestPrivate(const PutBackupVaultNotificationsRequestPrivate &other,
                                   PutBackupVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBackupVaultNotificationsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
