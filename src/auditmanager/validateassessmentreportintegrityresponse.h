// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYRESPONSE_H
#define QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYRESPONSE_H

#include "auditmanagerresponse.h"
#include "validateassessmentreportintegrityrequest.h"

namespace QtAws {
namespace AuditManager {

class ValidateAssessmentReportIntegrityResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ValidateAssessmentReportIntegrityResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ValidateAssessmentReportIntegrityResponse(const ValidateAssessmentReportIntegrityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateAssessmentReportIntegrityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateAssessmentReportIntegrityResponse)
    Q_DISABLE_COPY(ValidateAssessmentReportIntegrityResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
