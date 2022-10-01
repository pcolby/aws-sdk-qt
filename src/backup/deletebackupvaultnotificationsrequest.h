// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTNOTIFICATIONSREQUEST_H
#define QTAWS_DELETEBACKUPVAULTNOTIFICATIONSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultNotificationsRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultNotificationsRequest : public BackupRequest {

public:
    DeleteBackupVaultNotificationsRequest(const DeleteBackupVaultNotificationsRequest &other);
    DeleteBackupVaultNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultNotificationsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
