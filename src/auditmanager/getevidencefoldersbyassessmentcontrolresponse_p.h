// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLRESPONSE_P_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTCONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentControlResponse;

class GetEvidenceFoldersByAssessmentControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetEvidenceFoldersByAssessmentControlResponsePrivate(GetEvidenceFoldersByAssessmentControlResponse * const q);

    void parseGetEvidenceFoldersByAssessmentControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEvidenceFoldersByAssessmentControlResponse)
    Q_DISABLE_COPY(GetEvidenceFoldersByAssessmentControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
