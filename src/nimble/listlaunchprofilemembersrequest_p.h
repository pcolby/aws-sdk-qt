// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILEMEMBERSREQUEST_P_H
#define QTAWS_LISTLAUNCHPROFILEMEMBERSREQUEST_P_H

#include "nimblerequest_p.h"
#include "listlaunchprofilemembersrequest.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfileMembersRequest;

class ListLaunchProfileMembersRequestPrivate : public NimbleRequestPrivate {

public:
    ListLaunchProfileMembersRequestPrivate(const NimbleRequest::Action action,
                                   ListLaunchProfileMembersRequest * const q);
    ListLaunchProfileMembersRequestPrivate(const ListLaunchProfileMembersRequestPrivate &other,
                                   ListLaunchProfileMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLaunchProfileMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
