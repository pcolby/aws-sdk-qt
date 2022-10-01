// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTFRAMEWORKSHARERESPONSE_P_H
#define QTAWS_STARTASSESSMENTFRAMEWORKSHARERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class StartAssessmentFrameworkShareResponse;

class StartAssessmentFrameworkShareResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit StartAssessmentFrameworkShareResponsePrivate(StartAssessmentFrameworkShareResponse * const q);

    void parseStartAssessmentFrameworkShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAssessmentFrameworkShareResponse)
    Q_DISABLE_COPY(StartAssessmentFrameworkShareResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
