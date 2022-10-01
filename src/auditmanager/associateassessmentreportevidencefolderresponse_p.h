// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_P_H
#define QTAWS_ASSOCIATEASSESSMENTREPORTEVIDENCEFOLDERRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class AssociateAssessmentReportEvidenceFolderResponse;

class AssociateAssessmentReportEvidenceFolderResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit AssociateAssessmentReportEvidenceFolderResponsePrivate(AssociateAssessmentReportEvidenceFolderResponse * const q);

    void parseAssociateAssessmentReportEvidenceFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAssessmentReportEvidenceFolderResponse)
    Q_DISABLE_COPY(AssociateAssessmentReportEvidenceFolderResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
