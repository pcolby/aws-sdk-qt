// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSREQUEST_P_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listassessmentframeworksrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworksRequest;

class ListAssessmentFrameworksRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListAssessmentFrameworksRequestPrivate(const AuditManagerRequest::Action action,
                                   ListAssessmentFrameworksRequest * const q);
    ListAssessmentFrameworksRequestPrivate(const ListAssessmentFrameworksRequestPrivate &other,
                                   ListAssessmentFrameworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentFrameworksRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
