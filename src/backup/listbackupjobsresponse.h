// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPJOBSRESPONSE_H
#define QTAWS_LISTBACKUPJOBSRESPONSE_H

#include "backupresponse.h"
#include "listbackupjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupJobsResponsePrivate;

class QTAWSBACKUP_EXPORT ListBackupJobsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListBackupJobsResponse(const ListBackupJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupJobsResponse)
    Q_DISABLE_COPY(ListBackupJobsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
