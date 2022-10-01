// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPMEMBERSHIPREQUEST_P_H
#define QTAWS_CREATEGROUPMEMBERSHIPREQUEST_P_H

#include "quicksightrequest_p.h"
#include "creategroupmembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class CreateGroupMembershipRequest;

class CreateGroupMembershipRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateGroupMembershipRequestPrivate(const QuickSightRequest::Action action,
                                   CreateGroupMembershipRequest * const q);
    CreateGroupMembershipRequestPrivate(const CreateGroupMembershipRequestPrivate &other,
                                   CreateGroupMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
