// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTPLANRESPONSE_H
#define QTAWS_UPDATEREPORTPLANRESPONSE_H

#include "backupresponse.h"
#include "updatereportplanrequest.h"

namespace QtAws {
namespace Backup {

class UpdateReportPlanResponsePrivate;

class QTAWSBACKUP_EXPORT UpdateReportPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    UpdateReportPlanResponse(const UpdateReportPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReportPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReportPlanResponse)
    Q_DISABLE_COPY(UpdateReportPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
