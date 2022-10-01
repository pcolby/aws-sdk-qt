// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONREQUEST_H
#define QTAWS_PUTBACKUPVAULTLOCKCONFIGURATIONREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultLockConfigurationRequestPrivate;

class QTAWSBACKUP_EXPORT PutBackupVaultLockConfigurationRequest : public BackupRequest {

public:
    PutBackupVaultLockConfigurationRequest(const PutBackupVaultLockConfigurationRequest &other);
    PutBackupVaultLockConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupVaultLockConfigurationRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
