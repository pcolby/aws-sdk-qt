// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERSREQUEST_P_H
#define QTAWS_CREATEMEMBERSREQUEST_P_H

#include "detectiverequest_p.h"
#include "createmembersrequest.h"

namespace QtAws {
namespace Detective {

class CreateMembersRequest;

class CreateMembersRequestPrivate : public DetectiveRequestPrivate {

public:
    CreateMembersRequestPrivate(const DetectiveRequest::Action action,
                                   CreateMembersRequest * const q);
    CreateMembersRequestPrivate(const CreateMembersRequestPrivate &other,
                                   CreateMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMembersRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
