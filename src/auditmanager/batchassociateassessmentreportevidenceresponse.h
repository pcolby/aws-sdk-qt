// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_H
#define QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_H

#include "auditmanagerresponse.h"
#include "batchassociateassessmentreportevidencerequest.h"

namespace QtAws {
namespace AuditManager {

class BatchAssociateAssessmentReportEvidenceResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT BatchAssociateAssessmentReportEvidenceResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    BatchAssociateAssessmentReportEvidenceResponse(const BatchAssociateAssessmentReportEvidenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateAssessmentReportEvidenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateAssessmentReportEvidenceResponse)
    Q_DISABLE_COPY(BatchAssociateAssessmentReportEvidenceResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
