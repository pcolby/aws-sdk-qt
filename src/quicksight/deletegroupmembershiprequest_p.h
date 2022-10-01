// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETEGROUPMEMBERSHIPREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletegroupmembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteGroupMembershipRequest;

class DeleteGroupMembershipRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteGroupMembershipRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteGroupMembershipRequest * const q);
    DeleteGroupMembershipRequestPrivate(const DeleteGroupMembershipRequestPrivate &other,
                                   DeleteGroupMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGroupMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
