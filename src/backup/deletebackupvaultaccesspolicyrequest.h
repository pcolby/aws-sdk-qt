// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTACCESSPOLICYREQUEST_H
#define QTAWS_DELETEBACKUPVAULTACCESSPOLICYREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultAccessPolicyRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultAccessPolicyRequest : public BackupRequest {

public:
    DeleteBackupVaultAccessPolicyRequest(const DeleteBackupVaultAccessPolicyRequest &other);
    DeleteBackupVaultAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultAccessPolicyRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
