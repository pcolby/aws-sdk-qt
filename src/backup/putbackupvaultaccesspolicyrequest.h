// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTACCESSPOLICYREQUEST_H
#define QTAWS_PUTBACKUPVAULTACCESSPOLICYREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultAccessPolicyRequestPrivate;

class QTAWSBACKUP_EXPORT PutBackupVaultAccessPolicyRequest : public BackupRequest {

public:
    PutBackupVaultAccessPolicyRequest(const PutBackupVaultAccessPolicyRequest &other);
    PutBackupVaultAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupVaultAccessPolicyRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
