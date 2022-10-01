// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKRESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkResponse;

class UpdateAssessmentFrameworkResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateAssessmentFrameworkResponsePrivate(UpdateAssessmentFrameworkResponse * const q);

    void parseUpdateAssessmentFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentFrameworkResponse)
    Q_DISABLE_COPY(UpdateAssessmentFrameworkResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
