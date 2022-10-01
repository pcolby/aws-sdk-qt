// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTFRAMEWORKRESPONSE_P_H
#define QTAWS_GETASSESSMENTFRAMEWORKRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentFrameworkResponse;

class GetAssessmentFrameworkResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetAssessmentFrameworkResponsePrivate(GetAssessmentFrameworkResponse * const q);

    void parseGetAssessmentFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssessmentFrameworkResponse)
    Q_DISABLE_COPY(GetAssessmentFrameworkResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
