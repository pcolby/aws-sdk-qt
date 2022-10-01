// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTREPORTRESPONSE_H
#define QTAWS_DELETEASSESSMENTREPORTRESPONSE_H

#include "auditmanagerresponse.h"
#include "deleteassessmentreportrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentReportResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentReportResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeleteAssessmentReportResponse(const DeleteAssessmentReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssessmentReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentReportResponse)
    Q_DISABLE_COPY(DeleteAssessmentReportResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
