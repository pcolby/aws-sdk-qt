// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLRESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTCONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlResponse;

class UpdateAssessmentControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateAssessmentControlResponsePrivate(UpdateAssessmentControlResponse * const q);

    void parseUpdateAssessmentControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentControlResponse)
    Q_DISABLE_COPY(UpdateAssessmentControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
