// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_GETBACKUPVAULTNOTIFICATIONSREQUEST_P_H

#include "backuprequest_p.h"
#include "getbackupvaultnotificationsrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupVaultNotificationsRequest;

class GetBackupVaultNotificationsRequestPrivate : public BackupRequestPrivate {

public:
    GetBackupVaultNotificationsRequestPrivate(const BackupRequest::Action action,
                                   GetBackupVaultNotificationsRequest * const q);
    GetBackupVaultNotificationsRequestPrivate(const GetBackupVaultNotificationsRequestPrivate &other,
                                   GetBackupVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackupVaultNotificationsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
