// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSHAREREQUESTSREQUEST_P_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSHAREREQUESTSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listassessmentframeworksharerequestsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworkShareRequestsRequest;

class ListAssessmentFrameworkShareRequestsRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListAssessmentFrameworkShareRequestsRequestPrivate(const AuditManagerRequest::Action action,
                                   ListAssessmentFrameworkShareRequestsRequest * const q);
    ListAssessmentFrameworkShareRequestsRequestPrivate(const ListAssessmentFrameworkShareRequestsRequestPrivate &other,
                                   ListAssessmentFrameworkShareRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentFrameworkShareRequestsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
