// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKSHARERESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKSHARERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkShareResponse;

class UpdateAssessmentFrameworkShareResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateAssessmentFrameworkShareResponsePrivate(UpdateAssessmentFrameworkShareResponse * const q);

    void parseUpdateAssessmentFrameworkShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentFrameworkShareResponse)
    Q_DISABLE_COPY(UpdateAssessmentFrameworkShareResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
