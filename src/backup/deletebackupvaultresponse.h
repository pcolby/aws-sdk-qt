// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTRESPONSE_H
#define QTAWS_DELETEBACKUPVAULTRESPONSE_H

#include "backupresponse.h"
#include "deletebackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteBackupVaultResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteBackupVaultResponse(const DeleteBackupVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupVaultResponse)
    Q_DISABLE_COPY(DeleteBackupVaultResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
