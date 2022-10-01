// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTREQUEST_H
#define QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByBackupVaultRequestPrivate;

class QTAWSBACKUP_EXPORT ListRecoveryPointsByBackupVaultRequest : public BackupRequest {

public:
    ListRecoveryPointsByBackupVaultRequest(const ListRecoveryPointsByBackupVaultRequest &other);
    ListRecoveryPointsByBackupVaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryPointsByBackupVaultRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
