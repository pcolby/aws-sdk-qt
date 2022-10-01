// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTSREQUEST_P_H
#define QTAWS_LISTACCOUNTASSIGNMENTSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listaccountassignmentsrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentsRequest;

class ListAccountAssignmentsRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListAccountAssignmentsRequestPrivate(const SsoAdminRequest::Action action,
                                   ListAccountAssignmentsRequest * const q);
    ListAccountAssignmentsRequestPrivate(const ListAccountAssignmentsRequestPrivate &other,
                                   ListAccountAssignmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountAssignmentsRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
