// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTRESPONSE_P_H
#define QTAWS_LISTRECOVERYPOINTSBYBACKUPVAULTRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByBackupVaultResponse;

class ListRecoveryPointsByBackupVaultResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListRecoveryPointsByBackupVaultResponsePrivate(ListRecoveryPointsByBackupVaultResponse * const q);

    void parseListRecoveryPointsByBackupVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecoveryPointsByBackupVaultResponse)
    Q_DISABLE_COPY(ListRecoveryPointsByBackupVaultResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
