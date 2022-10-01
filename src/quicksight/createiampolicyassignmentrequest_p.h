// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIAMPOLICYASSIGNMENTREQUEST_P_H
#define QTAWS_CREATEIAMPOLICYASSIGNMENTREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateIAMPolicyAssignmentRequest;

class CreateIAMPolicyAssignmentRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateIAMPolicyAssignmentRequestPrivate(const QuickSightRequest::Action action,
                                   CreateIAMPolicyAssignmentRequest * const q);
    CreateIAMPolicyAssignmentRequestPrivate(const CreateIAMPolicyAssignmentRequestPrivate &other,
                                   CreateIAMPolicyAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
