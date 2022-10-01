// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_H
#define QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_H

#include "auditmanagerresponse.h"
#include "batchdisassociateassessmentreportevidencerequest.h"

namespace QtAws {
namespace AuditManager {

class BatchDisassociateAssessmentReportEvidenceResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT BatchDisassociateAssessmentReportEvidenceResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    BatchDisassociateAssessmentReportEvidenceResponse(const BatchDisassociateAssessmentReportEvidenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateAssessmentReportEvidenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateAssessmentReportEvidenceResponse)
    Q_DISABLE_COPY(BatchDisassociateAssessmentReportEvidenceResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
