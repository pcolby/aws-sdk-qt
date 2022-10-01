// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_DELETEBACKUPVAULTNOTIFICATIONSREQUEST_P_H

#include "backuprequest_p.h"
#include "deletebackupvaultnotificationsrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultNotificationsRequest;

class DeleteBackupVaultNotificationsRequestPrivate : public BackupRequestPrivate {

public:
    DeleteBackupVaultNotificationsRequestPrivate(const BackupRequest::Action action,
                                   DeleteBackupVaultNotificationsRequest * const q);
    DeleteBackupVaultNotificationsRequestPrivate(const DeleteBackupVaultNotificationsRequestPrivate &other,
                                   DeleteBackupVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultNotificationsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
