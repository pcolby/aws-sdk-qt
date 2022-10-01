// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOMEMBERREQUEST_P_H
#define QTAWS_GETSTUDIOMEMBERREQUEST_P_H

#include "nimblerequest_p.h"
#include "getstudiomemberrequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioMemberRequest;

class GetStudioMemberRequestPrivate : public NimbleRequestPrivate {

public:
    GetStudioMemberRequestPrivate(const NimbleRequest::Action action,
                                   GetStudioMemberRequest * const q);
    GetStudioMemberRequestPrivate(const GetStudioMemberRequestPrivate &other,
                                   GetStudioMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStudioMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
