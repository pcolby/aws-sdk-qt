// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_P_H
#define QTAWS_DISASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DisassociateAssessmentReportEvidenceFolderResponse;

class DisassociateAssessmentReportEvidenceFolderResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DisassociateAssessmentReportEvidenceFolderResponsePrivate(DisassociateAssessmentReportEvidenceFolderResponse * const q);

    void parseDisassociateAssessmentReportEvidenceFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAssessmentReportEvidenceFolderResponse)
    Q_DISABLE_COPY(DisassociateAssessmentReportEvidenceFolderResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
