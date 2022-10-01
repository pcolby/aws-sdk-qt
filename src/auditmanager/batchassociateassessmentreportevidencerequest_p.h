// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_P_H
#define QTAWS_BATCHASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "batchassociateassessmentreportevidencerequest.h"

namespace QtAws {
namespace AuditManager {

class BatchAssociateAssessmentReportEvidenceRequest;

class BatchAssociateAssessmentReportEvidenceRequestPrivate : public AuditManagerRequestPrivate {

public:
    BatchAssociateAssessmentReportEvidenceRequestPrivate(const AuditManagerRequest::Action action,
                                   BatchAssociateAssessmentReportEvidenceRequest * const q);
    BatchAssociateAssessmentReportEvidenceRequestPrivate(const BatchAssociateAssessmentReportEvidenceRequestPrivate &other,
                                   BatchAssociateAssessmentReportEvidenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateAssessmentReportEvidenceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
