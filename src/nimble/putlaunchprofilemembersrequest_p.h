// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLAUNCHPROFILEMEMBERSREQUEST_P_H
#define QTAWS_PUTLAUNCHPROFILEMEMBERSREQUEST_P_H

#include "nimblerequest_p.h"
#include "putlaunchprofilemembersrequest.h"

namespace QtAws {
namespace Nimble {

class PutLaunchProfileMembersRequest;

class PutLaunchProfileMembersRequestPrivate : public NimbleRequestPrivate {

public:
    PutLaunchProfileMembersRequestPrivate(const NimbleRequest::Action action,
                                   PutLaunchProfileMembersRequest * const q);
    PutLaunchProfileMembersRequestPrivate(const PutLaunchProfileMembersRequestPrivate &other,
                                   PutLaunchProfileMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLaunchProfileMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
