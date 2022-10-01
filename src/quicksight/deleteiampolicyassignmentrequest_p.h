// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIAMPOLICYASSIGNMENTREQUEST_P_H
#define QTAWS_DELETEIAMPOLICYASSIGNMENTREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deleteiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteIAMPolicyAssignmentRequest;

class DeleteIAMPolicyAssignmentRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteIAMPolicyAssignmentRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteIAMPolicyAssignmentRequest * const q);
    DeleteIAMPolicyAssignmentRequestPrivate(const DeleteIAMPolicyAssignmentRequestPrivate &other,
                                   DeleteIAMPolicyAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
