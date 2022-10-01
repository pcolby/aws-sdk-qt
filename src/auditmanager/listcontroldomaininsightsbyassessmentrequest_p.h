// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTREQUEST_P_H
#define QTAWS_LISTCONTROLDOMAININSIGHTSBYASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listcontroldomaininsightsbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class ListControlDomainInsightsByAssessmentRequest;

class ListControlDomainInsightsByAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListControlDomainInsightsByAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   ListControlDomainInsightsByAssessmentRequest * const q);
    ListControlDomainInsightsByAssessmentRequestPrivate(const ListControlDomainInsightsByAssessmentRequestPrivate &other,
                                   ListControlDomainInsightsByAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListControlDomainInsightsByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
