// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPVAULTRESPONSE_P_H
#define QTAWS_CREATEBACKUPVAULTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class CreateBackupVaultResponse;

class CreateBackupVaultResponsePrivate : public BackupResponsePrivate {

public:

    explicit CreateBackupVaultResponsePrivate(CreateBackupVaultResponse * const q);

    void parseCreateBackupVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackupVaultResponse)
    Q_DISABLE_COPY(CreateBackupVaultResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
