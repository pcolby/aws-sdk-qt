// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTREPORTRESPONSE_H
#define QTAWS_CREATEASSESSMENTREPORTRESPONSE_H

#include "auditmanagerresponse.h"
#include "createassessmentreportrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentReportResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT CreateAssessmentReportResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    CreateAssessmentReportResponse(const CreateAssessmentReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssessmentReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentReportResponse)
    Q_DISABLE_COPY(CreateAssessmentReportResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
