// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTMEMBERSHIPREQUEST_P_H
#define QTAWS_UPDATEENVIRONMENTMEMBERSHIPREQUEST_P_H

#include "cloud9request_p.h"
#include "updateenvironmentmembershiprequest.h"

namespace QtAws {
namespace Cloud9 {

class UpdateEnvironmentMembershipRequest;

class UpdateEnvironmentMembershipRequestPrivate : public Cloud9RequestPrivate {

public:
    UpdateEnvironmentMembershipRequestPrivate(const Cloud9Request::Action action,
                                   UpdateEnvironmentMembershipRequest * const q);
    UpdateEnvironmentMembershipRequestPrivate(const UpdateEnvironmentMembershipRequestPrivate &other,
                                   UpdateEnvironmentMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentMembershipRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
