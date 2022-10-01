// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPJOBRESPONSE_P_H
#define QTAWS_DESCRIBEBACKUPJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeBackupJobResponse;

class DescribeBackupJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeBackupJobResponsePrivate(DescribeBackupJobResponse * const q);

    void parseDescribeBackupJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBackupJobResponse)
    Q_DISABLE_COPY(DescribeBackupJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
