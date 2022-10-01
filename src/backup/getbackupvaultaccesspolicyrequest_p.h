// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPVAULTACCESSPOLICYREQUEST_P_H
#define QTAWS_GETBACKUPVAULTACCESSPOLICYREQUEST_P_H

#include "backuprequest_p.h"
#include "getbackupvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupVaultAccessPolicyRequest;

class GetBackupVaultAccessPolicyRequestPrivate : public BackupRequestPrivate {

public:
    GetBackupVaultAccessPolicyRequestPrivate(const BackupRequest::Action action,
                                   GetBackupVaultAccessPolicyRequest * const q);
    GetBackupVaultAccessPolicyRequestPrivate(const GetBackupVaultAccessPolicyRequestPrivate &other,
                                   GetBackupVaultAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackupVaultAccessPolicyRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
