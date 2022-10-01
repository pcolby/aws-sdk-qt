// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINREQUEST_P_H
#define QTAWS_LISTASSESSMENTCONTROLINSIGHTSBYCONTROLDOMAINREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listassessmentcontrolinsightsbycontroldomainrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentControlInsightsByControlDomainRequest;

class ListAssessmentControlInsightsByControlDomainRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListAssessmentControlInsightsByControlDomainRequestPrivate(const AuditManagerRequest::Action action,
                                   ListAssessmentControlInsightsByControlDomainRequest * const q);
    ListAssessmentControlInsightsByControlDomainRequestPrivate(const ListAssessmentControlInsightsByControlDomainRequestPrivate &other,
                                   ListAssessmentControlInsightsByControlDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentControlInsightsByControlDomainRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
