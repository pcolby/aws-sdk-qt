// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPVAULTRESPONSE_H
#define QTAWS_CREATEBACKUPVAULTRESPONSE_H

#include "backupresponse.h"
#include "createbackupvaultrequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupVaultResponsePrivate;

class QTAWSBACKUP_EXPORT CreateBackupVaultResponse : public BackupResponse {
    Q_OBJECT

public:
    CreateBackupVaultResponse(const CreateBackupVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackupVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupVaultResponse)
    Q_DISABLE_COPY(CreateBackupVaultResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
