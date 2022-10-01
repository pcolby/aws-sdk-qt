// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTACCESSPOLICYRESPONSE_P_H
#define QTAWS_DELETEBACKUPVAULTACCESSPOLICYRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultAccessPolicyResponse;

class DeleteBackupVaultAccessPolicyResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteBackupVaultAccessPolicyResponsePrivate(DeleteBackupVaultAccessPolicyResponse * const q);

    void parseDeleteBackupVaultAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultAccessPolicyResponse)
    Q_DISABLE_COPY(DeleteBackupVaultAccessPolicyResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
