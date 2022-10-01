// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATEASSESSMENTREPORTEVIDENCEREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "batchdisassociateassessmentreportevidencerequest.h"

namespace QtAws {
namespace AuditManager {

class BatchDisassociateAssessmentReportEvidenceRequest;

class BatchDisassociateAssessmentReportEvidenceRequestPrivate : public AuditManagerRequestPrivate {

public:
    BatchDisassociateAssessmentReportEvidenceRequestPrivate(const AuditManagerRequest::Action action,
                                   BatchDisassociateAssessmentReportEvidenceRequest * const q);
    BatchDisassociateAssessmentReportEvidenceRequestPrivate(const BatchDisassociateAssessmentReportEvidenceRequestPrivate &other,
                                   BatchDisassociateAssessmentReportEvidenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateAssessmentReportEvidenceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
