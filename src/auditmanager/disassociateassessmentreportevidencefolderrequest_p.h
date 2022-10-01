// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_P_H
#define QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "disassociateassessmentreportevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class DisassociateAssessmentReportEvidenceFolderRequest;

class DisassociateAssessmentReportEvidenceFolderRequestPrivate : public AuditManagerRequestPrivate {

public:
    DisassociateAssessmentReportEvidenceFolderRequestPrivate(const AuditManagerRequest::Action action,
                                   DisassociateAssessmentReportEvidenceFolderRequest * const q);
    DisassociateAssessmentReportEvidenceFolderRequestPrivate(const DisassociateAssessmentReportEvidenceFolderRequestPrivate &other,
                                   DisassociateAssessmentReportEvidenceFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAssessmentReportEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
