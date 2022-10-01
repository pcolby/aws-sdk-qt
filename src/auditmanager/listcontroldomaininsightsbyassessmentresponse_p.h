// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTRESPONSE_P_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsByAssessmentResponse;

class ListControlDomainInsightsByAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListControlDomainInsightsByAssessmentResponsePrivate(ListControlDomainInsightsByAssessmentResponse * const q);

    void parseListControlDomainInsightsByAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListControlDomainInsightsByAssessmentResponse)
    Q_DISABLE_COPY(ListControlDomainInsightsByAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
