// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPJOBSRESPONSE_P_H
#define QTAWS_LISTBACKUPJOBSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListBackupJobsResponse;

class ListBackupJobsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListBackupJobsResponsePrivate(ListBackupJobsResponse * const q);

    void parseListBackupJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupJobsResponse)
    Q_DISABLE_COPY(ListBackupJobsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
