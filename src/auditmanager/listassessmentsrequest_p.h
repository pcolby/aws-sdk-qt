// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTSREQUEST_P_H
#define QTAWS_LISTASSESSMENTSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "listassessmentsrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentsRequest;

class ListAssessmentsRequestPrivate : public AuditManagerRequestPrivate {

public:
    ListAssessmentsRequestPrivate(const AuditManagerRequest::Action action,
                                   ListAssessmentsRequest * const q);
    ListAssessmentsRequestPrivate(const ListAssessmentsRequestPrivate &other,
                                   ListAssessmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssessmentsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
