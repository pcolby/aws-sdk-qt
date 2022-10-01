// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBACKUPJOBRESPONSE_P_H
#define QTAWS_STARTBACKUPJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class StartBackupJobResponse;

class StartBackupJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit StartBackupJobResponsePrivate(StartBackupJobResponse * const q);

    void parseStartBackupJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBackupJobResponse)
    Q_DISABLE_COPY(StartBackupJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
