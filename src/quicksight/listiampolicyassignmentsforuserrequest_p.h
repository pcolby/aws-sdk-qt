// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERREQUEST_P_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listiampolicyassignmentsforuserrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsForUserRequest;

class ListIAMPolicyAssignmentsForUserRequestPrivate : public QuickSightRequestPrivate {

public:
    ListIAMPolicyAssignmentsForUserRequestPrivate(const QuickSightRequest::Action action,
                                   ListIAMPolicyAssignmentsForUserRequest * const q);
    ListIAMPolicyAssignmentsForUserRequestPrivate(const ListIAMPolicyAssignmentsForUserRequestPrivate &other,
                                   ListIAMPolicyAssignmentsForUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIAMPolicyAssignmentsForUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
