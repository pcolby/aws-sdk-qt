// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_P_H
#define QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listaccountassignmentdeletionstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentDeletionStatusRequest;

class ListAccountAssignmentDeletionStatusRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListAccountAssignmentDeletionStatusRequestPrivate(const SsoAdminRequest::Action action,
                                   ListAccountAssignmentDeletionStatusRequest * const q);
    ListAccountAssignmentDeletionStatusRequestPrivate(const ListAccountAssignmentDeletionStatusRequestPrivate &other,
                                   ListAccountAssignmentDeletionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountAssignmentDeletionStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
