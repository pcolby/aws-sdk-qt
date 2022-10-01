// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPVAULTREQUEST_P_H
#define QTAWS_CREATEBACKUPVAULTREQUEST_P_H

#include "backuprequest_p.h"
#include "createbackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupVaultRequest;

class CreateBackupVaultRequestPrivate : public BackupRequestPrivate {

public:
    CreateBackupVaultRequestPrivate(const BackupRequest::Action action,
                                   CreateBackupVaultRequest * const q);
    CreateBackupVaultRequestPrivate(const CreateBackupVaultRequestPrivate &other,
                                   CreateBackupVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
