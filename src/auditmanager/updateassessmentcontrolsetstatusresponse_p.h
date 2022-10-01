// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSRESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlSetStatusResponse;

class UpdateAssessmentControlSetStatusResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateAssessmentControlSetStatusResponsePrivate(UpdateAssessmentControlSetStatusResponse * const q);

    void parseUpdateAssessmentControlSetStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentControlSetStatusResponse)
    Q_DISABLE_COPY(UpdateAssessmentControlSetStatusResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
