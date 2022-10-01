// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLRESPONSE_P_H
#define QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class BatchImportEvidenceToAssessmentControlResponse;

class BatchImportEvidenceToAssessmentControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit BatchImportEvidenceToAssessmentControlResponsePrivate(BatchImportEvidenceToAssessmentControlResponse * const q);

    void parseBatchImportEvidenceToAssessmentControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchImportEvidenceToAssessmentControlResponse)
    Q_DISABLE_COPY(BatchImportEvidenceToAssessmentControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
