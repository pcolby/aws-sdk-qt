// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_P_H
#define QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentControlInsightsByControlDomainResponse;

class ListAssessmentControlInsightsByControlDomainResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListAssessmentControlInsightsByControlDomainResponsePrivate(ListAssessmentControlInsightsByControlDomainResponse * const q);

    void parseListAssessmentControlInsightsByControlDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssessmentControlInsightsByControlDomainResponse)
    Q_DISABLE_COPY(ListAssessmentControlInsightsByControlDomainResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
