// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBACKUPJOBRESPONSE_P_H
#define QTAWS_STOPBACKUPJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class StopBackupJobResponse;

class StopBackupJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit StopBackupJobResponsePrivate(StopBackupJobResponse * const q);

    void parseStopBackupJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopBackupJobResponse)
    Q_DISABLE_COPY(StopBackupJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
