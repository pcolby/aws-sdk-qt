// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTMEMBERSHIPREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTMEMBERSHIPREQUEST_P_H

#include "cloud9request_p.h"
#include "createenvironmentmembershiprequest.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentMembershipRequest;

class CreateEnvironmentMembershipRequestPrivate : public Cloud9RequestPrivate {

public:
    CreateEnvironmentMembershipRequestPrivate(const Cloud9Request::Action action,
                                   CreateEnvironmentMembershipRequest * const q);
    CreateEnvironmentMembershipRequestPrivate(const CreateEnvironmentMembershipRequestPrivate &other,
                                   CreateEnvironmentMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentMembershipRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
