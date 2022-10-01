// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERMEMBERSHIPREQUEST_P_H
#define QTAWS_CREATEFOLDERMEMBERSHIPREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createfoldermembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderMembershipRequest;

class CreateFolderMembershipRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateFolderMembershipRequestPrivate(const QuickSightRequest::Action action,
                                   CreateFolderMembershipRequest * const q);
    CreateFolderMembershipRequestPrivate(const CreateFolderMembershipRequestPrivate &other,
                                   CreateFolderMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFolderMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
