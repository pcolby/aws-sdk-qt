// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPJOBRESPONSE_H
#define QTAWS_DESCRIBEBACKUPJOBRESPONSE_H

#include "backupresponse.h"
#include "describebackupjobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeBackupJobResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeBackupJobResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeBackupJobResponse(const DescribeBackupJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBackupJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupJobResponse)
    Q_DISABLE_COPY(DescribeBackupJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
