// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTRESPONSE_P_H
#define QTAWS_CREATEASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentResponse;

class CreateAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit CreateAssessmentResponsePrivate(CreateAssessmentResponse * const q);

    void parseCreateAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentResponse)
    Q_DISABLE_COPY(CreateAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
