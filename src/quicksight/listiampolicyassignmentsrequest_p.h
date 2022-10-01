// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSREQUEST_P_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listiampolicyassignmentsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsRequest;

class ListIAMPolicyAssignmentsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListIAMPolicyAssignmentsRequestPrivate(const QuickSightRequest::Action action,
                                   ListIAMPolicyAssignmentsRequest * const q);
    ListIAMPolicyAssignmentsRequestPrivate(const ListIAMPolicyAssignmentsRequestPrivate &other,
                                   ListIAMPolicyAssignmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIAMPolicyAssignmentsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
