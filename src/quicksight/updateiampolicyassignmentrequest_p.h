// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIAMPOLICYASSIGNMENTREQUEST_P_H
#define QTAWS_UPDATEIAMPOLICYASSIGNMENTREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updateiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateIAMPolicyAssignmentRequest;

class UpdateIAMPolicyAssignmentRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateIAMPolicyAssignmentRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateIAMPolicyAssignmentRequest * const q);
    UpdateIAMPolicyAssignmentRequestPrivate(const UpdateIAMPolicyAssignmentRequestPrivate &other,
                                   UpdateIAMPolicyAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
