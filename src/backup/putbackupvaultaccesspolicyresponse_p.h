// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTACCESSPOLICYRESPONSE_P_H
#define QTAWS_PUTBACKUPVAULTACCESSPOLICYRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultAccessPolicyResponse;

class PutBackupVaultAccessPolicyResponsePrivate : public BackupResponsePrivate {

public:

    explicit PutBackupVaultAccessPolicyResponsePrivate(PutBackupVaultAccessPolicyResponse * const q);

    void parsePutBackupVaultAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBackupVaultAccessPolicyResponse)
    Q_DISABLE_COPY(PutBackupVaultAccessPolicyResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
