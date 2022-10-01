// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTRESPONSE_H
#define QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTRESPONSE_H

#include "backupresponse.h"
#include "listrecoverypointsbybackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByBackupVaultResponsePrivate;

class QTAWSBACKUP_EXPORT ListRecoveryPointsByBackupVaultResponse : public BackupResponse {
    Q_OBJECT

public:
    ListRecoveryPointsByBackupVaultResponse(const ListRecoveryPointsByBackupVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecoveryPointsByBackupVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryPointsByBackupVaultResponse)
    Q_DISABLE_COPY(ListRecoveryPointsByBackupVaultResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
