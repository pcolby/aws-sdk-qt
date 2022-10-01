// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPVAULTRESPONSE_P_H
#define QTAWS_DELETEBACKUPVAULTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteBackupVaultResponse;

class DeleteBackupVaultResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteBackupVaultResponsePrivate(DeleteBackupVaultResponse * const q);

    void parseDeleteBackupVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupVaultResponse)
    Q_DISABLE_COPY(DeleteBackupVaultResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
