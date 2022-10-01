// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTACCESSPOLICYREQUEST_P_H
#define QTAWS_DELETEBACKUPVAULTACCESSPOLICYREQUEST_P_H

#include "backuprequest_p.h"
#include "deletebackupvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultAccessPolicyRequest;

class DeleteBackupVaultAccessPolicyRequestPrivate : public BackupRequestPrivate {

public:
    DeleteBackupVaultAccessPolicyRequestPrivate(const BackupRequest::Action action,
                                   DeleteBackupVaultAccessPolicyRequest * const q);
    DeleteBackupVaultAccessPolicyRequestPrivate(const DeleteBackupVaultAccessPolicyRequestPrivate &other,
                                   DeleteBackupVaultAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultAccessPolicyRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
