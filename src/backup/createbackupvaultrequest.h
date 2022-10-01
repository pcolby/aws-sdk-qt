// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPVAULTREQUEST_H
#define QTAWS_CREATEBACKUPVAULTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupVaultRequestPrivate;

class QTAWSBACKUP_EXPORT CreateBackupVaultRequest : public BackupRequest {

public:
    CreateBackupVaultRequest(const CreateBackupVaultRequest &other);
    CreateBackupVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
