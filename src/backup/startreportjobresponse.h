// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTJOBRESPONSE_H
#define QTAWS_STARTREPORTJOBRESPONSE_H

#include "backupresponse.h"
#include "startreportjobrequest.h"

namespace QtAws {
namespace Backup {

class StartReportJobResponsePrivate;

class QTAWSBACKUP_EXPORT StartReportJobResponse : public BackupResponse {
    Q_OBJECT

public:
    StartReportJobResponse(const StartReportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartReportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReportJobResponse)
    Q_DISABLE_COPY(StartReportJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
