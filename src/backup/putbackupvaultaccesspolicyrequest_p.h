// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTACCESSPOLICYREQUEST_P_H
#define QTAWS_PUTBACKUPVAULTACCESSPOLICYREQUEST_P_H

#include "backuprequest_p.h"
#include "putbackupvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultAccessPolicyRequest;

class PutBackupVaultAccessPolicyRequestPrivate : public BackupRequestPrivate {

public:
    PutBackupVaultAccessPolicyRequestPrivate(const BackupRequest::Action action,
                                   PutBackupVaultAccessPolicyRequest * const q);
    PutBackupVaultAccessPolicyRequestPrivate(const PutBackupVaultAccessPolicyRequestPrivate &other,
                                   PutBackupVaultAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBackupVaultAccessPolicyRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
