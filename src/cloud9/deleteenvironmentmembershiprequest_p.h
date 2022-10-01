// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTMEMBERSHIPREQUEST_P_H

#include "cloud9request_p.h"
#include "deleteenvironmentmembershiprequest.h"

namespace QtAws {
namespace Cloud9 {

class DeleteEnvironmentMembershipRequest;

class DeleteEnvironmentMembershipRequestPrivate : public Cloud9RequestPrivate {

public:
    DeleteEnvironmentMembershipRequestPrivate(const Cloud9Request::Action action,
                                   DeleteEnvironmentMembershipRequest * const q);
    DeleteEnvironmentMembershipRequestPrivate(const DeleteEnvironmentMembershipRequestPrivate &other,
                                   DeleteEnvironmentMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentMembershipRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
