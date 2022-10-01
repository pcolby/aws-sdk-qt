// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLREQUEST_P_H
#define QTAWS_BATCHIMPORTEVIDENCETOASSESSMENTCONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "batchimportevidencetoassessmentcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchImportEvidenceToAssessmentControlRequest;

class BatchImportEvidenceToAssessmentControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    BatchImportEvidenceToAssessmentControlRequestPrivate(const AuditManagerRequest::Action action,
                                   BatchImportEvidenceToAssessmentControlRequest * const q);
    BatchImportEvidenceToAssessmentControlRequestPrivate(const BatchImportEvidenceToAssessmentControlRequestPrivate &other,
                                   BatchImportEvidenceToAssessmentControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchImportEvidenceToAssessmentControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
