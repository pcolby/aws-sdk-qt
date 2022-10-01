// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTRESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentResponse;

class UpdateAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateAssessmentResponsePrivate(UpdateAssessmentResponse * const q);

    void parseUpdateAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentResponse)
    Q_DISABLE_COPY(UpdateAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
