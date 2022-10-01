// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTPLANRESPONSE_H
#define QTAWS_CREATEREPORTPLANRESPONSE_H

#include "backupresponse.h"
#include "createreportplanrequest.h"

namespace QtAws {
namespace Backup {

class CreateReportPlanResponsePrivate;

class QTAWSBACKUP_EXPORT CreateReportPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    CreateReportPlanResponse(const CreateReportPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReportPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReportPlanResponse)
    Q_DISABLE_COPY(CreateReportPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
