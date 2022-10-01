// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESTOREJOBSRESPONSE_H
#define QTAWS_LISTRESTOREJOBSRESPONSE_H

#include "backupresponse.h"
#include "listrestorejobsrequest.h"

namespace QtAws {
namespace Backup {

class ListRestoreJobsResponsePrivate;

class QTAWSBACKUP_EXPORT ListRestoreJobsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListRestoreJobsResponse(const ListRestoreJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRestoreJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRestoreJobsResponse)
    Q_DISABLE_COPY(ListRestoreJobsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
