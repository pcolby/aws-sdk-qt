// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class BatchDisassociateAssessmentReportEvidenceResponse;

class BatchDisassociateAssessmentReportEvidenceResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit BatchDisassociateAssessmentReportEvidenceResponsePrivate(BatchDisassociateAssessmentReportEvidenceResponse * const q);

    void parseBatchDisassociateAssessmentReportEvidenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateAssessmentReportEvidenceResponse)
    Q_DISABLE_COPY(BatchDisassociateAssessmentReportEvidenceResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
