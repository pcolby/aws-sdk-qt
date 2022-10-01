// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILEMEMBERREQUEST_P_H
#define QTAWS_DELETELAUNCHPROFILEMEMBERREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletelaunchprofilememberrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileMemberRequest;

class DeleteLaunchProfileMemberRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteLaunchProfileMemberRequestPrivate(const NimbleRequest::Action action,
                                   DeleteLaunchProfileMemberRequest * const q);
    DeleteLaunchProfileMemberRequestPrivate(const DeleteLaunchProfileMemberRequestPrivate &other,
                                   DeleteLaunchProfileMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchProfileMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
