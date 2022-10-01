// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOPYJOBSRESPONSE_H
#define QTAWS_LISTCOPYJOBSRESPONSE_H

#include "backupresponse.h"
#include "listcopyjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListCopyJobsResponsePrivate;

class QTAWSBACKUP_EXPORT ListCopyJobsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListCopyJobsResponse(const ListCopyJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCopyJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCopyJobsResponse)
    Q_DISABLE_COPY(ListCopyJobsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
