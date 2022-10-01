// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTREQUEST_P_H
#define QTAWS_DELETEBACKUPVAULTREQUEST_P_H

#include "backuprequest_p.h"
#include "deletebackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultRequest;

class DeleteBackupVaultRequestPrivate : public BackupRequestPrivate {

public:
    DeleteBackupVaultRequestPrivate(const BackupRequest::Action action,
                                   DeleteBackupVaultRequest * const q);
    DeleteBackupVaultRequestPrivate(const DeleteBackupVaultRequestPrivate &other,
                                   DeleteBackupVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
