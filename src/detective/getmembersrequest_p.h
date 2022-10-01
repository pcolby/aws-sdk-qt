// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSREQUEST_P_H
#define QTAWS_GETMEMBERSREQUEST_P_H

#include "detectiverequest_p.h"
#include "getmembersrequest.h"

namespace QtAws {
namespace Detective {

class GetMembersRequest;

class GetMembersRequestPrivate : public DetectiveRequestPrivate {

public:
    GetMembersRequestPrivate(const DetectiveRequest::Action action,
                                   GetMembersRequest * const q);
    GetMembersRequestPrivate(const GetMembersRequestPrivate &other,
                                   GetMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMembersRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
