// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTACCESSPOLICYRESPONSE_H
#define QTAWS_DELETEBACKUPVAULTACCESSPOLICYRESPONSE_H

#include "backupresponse.h"
#include "deletebackupvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultAccessPolicyResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultAccessPolicyResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteBackupVaultAccessPolicyResponse(const DeleteBackupVaultAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupVaultAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultAccessPolicyResponse)
    Q_DISABLE_COPY(DeleteBackupVaultAccessPolicyResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
