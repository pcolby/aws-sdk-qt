// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBACKUPJOBRESPONSE_H
#define QTAWS_STARTBACKUPJOBRESPONSE_H

#include "backupresponse.h"
#include "startbackupjobrequest.h"

namespace QtAws {
namespace Backup {

class StartBackupJobResponsePrivate;

class QTAWSBACKUP_EXPORT StartBackupJobResponse : public BackupResponse {
    Q_OBJECT

public:
    StartBackupJobResponse(const StartBackupJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBackupJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBackupJobResponse)
    Q_DISABLE_COPY(StartBackupJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
