// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTSTATUSRESPONSE_P_H
#define QTAWS_UPDATEASSESSMENTSTATUSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentStatusResponse;

class UpdateAssessmentStatusResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateAssessmentStatusResponsePrivate(UpdateAssessmentStatusResponse * const q);

    void parseUpdateAssessmentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentStatusResponse)
    Q_DISABLE_COPY(UpdateAssessmentStatusResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
