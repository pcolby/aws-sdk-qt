// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTFRAMEWORKRESPONSE_P_H
#define QTAWS_CREATEASSESSMENTFRAMEWORKRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentFrameworkResponse;

class CreateAssessmentFrameworkResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit CreateAssessmentFrameworkResponsePrivate(CreateAssessmentFrameworkResponse * const q);

    void parseCreateAssessmentFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentFrameworkResponse)
    Q_DISABLE_COPY(CreateAssessmentFrameworkResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
