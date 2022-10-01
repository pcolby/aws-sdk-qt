// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_P_H
#define QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "associateassessmentreportevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class AssociateAssessmentReportEvidenceFolderRequest;

class AssociateAssessmentReportEvidenceFolderRequestPrivate : public AuditManagerRequestPrivate {

public:
    AssociateAssessmentReportEvidenceFolderRequestPrivate(const AuditManagerRequest::Action action,
                                   AssociateAssessmentReportEvidenceFolderRequest * const q);
    AssociateAssessmentReportEvidenceFolderRequestPrivate(const AssociateAssessmentReportEvidenceFolderRequestPrivate &other,
                                   AssociateAssessmentReportEvidenceFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAssessmentReportEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
