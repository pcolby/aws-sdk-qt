// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPVAULTACCESSPOLICYRESPONSE_P_H
#define QTAWS_GETBACKUPVAULTACCESSPOLICYRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetBackupVaultAccessPolicyResponse;

class GetBackupVaultAccessPolicyResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetBackupVaultAccessPolicyResponsePrivate(GetBackupVaultAccessPolicyResponse * const q);

    void parseGetBackupVaultAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackupVaultAccessPolicyResponse)
    Q_DISABLE_COPY(GetBackupVaultAccessPolicyResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
