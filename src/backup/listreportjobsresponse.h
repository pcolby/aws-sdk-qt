// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTJOBSRESPONSE_H
#define QTAWS_LISTREPORTJOBSRESPONSE_H

#include "backupresponse.h"
#include "listreportjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListReportJobsResponsePrivate;

class QTAWSBACKUP_EXPORT ListReportJobsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListReportJobsResponse(const ListReportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportJobsResponse)
    Q_DISABLE_COPY(ListReportJobsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
