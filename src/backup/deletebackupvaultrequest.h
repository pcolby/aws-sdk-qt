// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTREQUEST_H
#define QTAWS_DELETEBACKUPVAULTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultRequest : public BackupRequest {

public:
    DeleteBackupVaultRequest(const DeleteBackupVaultRequest &other);
    DeleteBackupVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
