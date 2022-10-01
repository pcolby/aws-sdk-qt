// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_P_H
#define QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class BatchAssociateAssessmentReportEvidenceResponse;

class BatchAssociateAssessmentReportEvidenceResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit BatchAssociateAssessmentReportEvidenceResponsePrivate(BatchAssociateAssessmentReportEvidenceResponse * const q);

    void parseBatchAssociateAssessmentReportEvidenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateAssessmentReportEvidenceResponse)
    Q_DISABLE_COPY(BatchAssociateAssessmentReportEvidenceResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
