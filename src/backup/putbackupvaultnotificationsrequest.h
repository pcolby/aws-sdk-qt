// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPVAULTNOTIFICATIONSREQUEST_H
#define QTAWS_PUTBACKUPVAULTNOTIFICATIONSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class PutBackupVaultNotificationsRequestPrivate;

class QTAWSBACKUP_EXPORT PutBackupVaultNotificationsRequest : public BackupRequest {

public:
    PutBackupVaultNotificationsRequest(const PutBackupVaultNotificationsRequest &other);
    PutBackupVaultNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupVaultNotificationsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
