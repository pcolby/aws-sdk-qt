// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEMEMBERREQUEST_P_H
#define QTAWS_GETLAUNCHPROFILEMEMBERREQUEST_P_H

#include "nimblerequest_p.h"
#include "getlaunchprofilememberrequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileMemberRequest;

class GetLaunchProfileMemberRequestPrivate : public NimbleRequestPrivate {

public:
    GetLaunchProfileMemberRequestPrivate(const NimbleRequest::Action action,
                                   GetLaunchProfileMemberRequest * const q);
    GetLaunchProfileMemberRequestPrivate(const GetLaunchProfileMemberRequestPrivate &other,
                                   GetLaunchProfileMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchProfileMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
