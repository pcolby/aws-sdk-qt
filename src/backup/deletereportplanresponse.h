// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTPLANRESPONSE_H
#define QTAWS_DELETEREPORTPLANRESPONSE_H

#include "backupresponse.h"
#include "deletereportplanrequest.h"

namespace QtAws {
namespace Backup {

class DeleteReportPlanResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteReportPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteReportPlanResponse(const DeleteReportPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReportPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportPlanResponse)
    Q_DISABLE_COPY(DeleteReportPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
