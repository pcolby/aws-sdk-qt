// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILEMEMBERREQUEST_P_H
#define QTAWS_UPDATELAUNCHPROFILEMEMBERREQUEST_P_H

#include "nimblerequest_p.h"
#include "updatelaunchprofilememberrequest.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileMemberRequest;

class UpdateLaunchProfileMemberRequestPrivate : public NimbleRequestPrivate {

public:
    UpdateLaunchProfileMemberRequestPrivate(const NimbleRequest::Action action,
                                   UpdateLaunchProfileMemberRequest * const q);
    UpdateLaunchProfileMemberRequestPrivate(const UpdateLaunchProfileMemberRequestPrivate &other,
                                   UpdateLaunchProfileMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchProfileMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
