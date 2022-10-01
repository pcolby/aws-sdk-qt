// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTACCESSPOLICYRESPONSE_H
#define QTAWS_PUTBACKUPVAULTACCESSPOLICYRESPONSE_H

#include "backupresponse.h"
#include "putbackupvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultAccessPolicyResponsePrivate;

class QTAWSBACKUP_EXPORT PutBackupVaultAccessPolicyResponse : public BackupResponse {
    Q_OBJECT

public:
    PutBackupVaultAccessPolicyResponse(const PutBackupVaultAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBackupVaultAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupVaultAccessPolicyResponse)
    Q_DISABLE_COPY(PutBackupVaultAccessPolicyResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
