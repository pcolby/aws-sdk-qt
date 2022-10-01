// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONREQUEST_H
#define QTAWS_DELETEBACKUPVAULTLOCKCONFIGURATIONREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultLockConfigurationRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultLockConfigurationRequest : public BackupRequest {

public:
    DeleteBackupVaultLockConfigurationRequest(const DeleteBackupVaultLockConfigurationRequest &other);
    DeleteBackupVaultLockConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultLockConfigurationRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
