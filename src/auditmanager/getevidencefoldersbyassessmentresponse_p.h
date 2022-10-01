// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTRESPONSE_P_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentResponse;

class GetEvidenceFoldersByAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetEvidenceFoldersByAssessmentResponsePrivate(GetEvidenceFoldersByAssessmentResponse * const q);

    void parseGetEvidenceFoldersByAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEvidenceFoldersByAssessmentResponse)
    Q_DISABLE_COPY(GetEvidenceFoldersByAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
