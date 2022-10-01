// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPVAULTSRESPONSE_P_H
#define QTAWS_LISTBACKUPVAULTSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListBackupVaultsResponse;

class ListBackupVaultsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListBackupVaultsResponsePrivate(ListBackupVaultsResponse * const q);

    void parseListBackupVaultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupVaultsResponse)
    Q_DISABLE_COPY(ListBackupVaultsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
