// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBACKUPJOBRESPONSE_H
#define QTAWS_STOPBACKUPJOBRESPONSE_H

#include "backupresponse.h"
#include "stopbackupjobrequest.h"

namespace QtAws {
namespace Backup {

class StopBackupJobResponsePrivate;

class QTAWSBACKUP_EXPORT StopBackupJobResponse : public BackupResponse {
    Q_OBJECT

public:
    StopBackupJobResponse(const StopBackupJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopBackupJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBackupJobResponse)
    Q_DISABLE_COPY(StopBackupJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
