// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTREPORTSREQUEST_P_H
#define QTAWS_LISTASSESSMENTREPORTSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listassessmentreportsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentReportsRequest;

class ListAssessmentReportsRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListAssessmentReportsRequestPrivate(const AuditManagerRequest::Action action,
                                   ListAssessmentReportsRequest * const q);
    ListAssessmentReportsRequestPrivate(const ListAssessmentReportsRequestPrivate &other,
                                   ListAssessmentReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentReportsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
