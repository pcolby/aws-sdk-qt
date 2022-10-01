// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETEFOLDERMEMBERSHIPREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletefoldermembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderMembershipRequest;

class DeleteFolderMembershipRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteFolderMembershipRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteFolderMembershipRequest * const q);
    DeleteFolderMembershipRequestPrivate(const DeleteFolderMembershipRequestPrivate &other,
                                   DeleteFolderMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFolderMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
