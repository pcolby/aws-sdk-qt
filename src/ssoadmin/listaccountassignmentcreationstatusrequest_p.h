// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_P_H
#define QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listaccountassignmentcreationstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentCreationStatusRequest;

class ListAccountAssignmentCreationStatusRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListAccountAssignmentCreationStatusRequestPrivate(const SsoAdminRequest::Action action,
                                   ListAccountAssignmentCreationStatusRequest * const q);
    ListAccountAssignmentCreationStatusRequestPrivate(const ListAccountAssignmentCreationStatusRequestPrivate &other,
                                   ListAccountAssignmentCreationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountAssignmentCreationStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
