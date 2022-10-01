// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILESREQUEST_P_H
#define QTAWS_LISTLAUNCHPROFILESREQUEST_P_H

#include "nimblerequest_p.h"
#include "listlaunchprofilesrequest.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfilesRequest;

class ListLaunchProfilesRequestPrivate : public NimbleRequestPrivate {

public:
    ListLaunchProfilesRequestPrivate(const NimbleRequest::Action action,
                                   ListLaunchProfilesRequest * const q);
    ListLaunchProfilesRequestPrivate(const ListLaunchProfilesRequestPrivate &other,
                                   ListLaunchProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLaunchProfilesRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
