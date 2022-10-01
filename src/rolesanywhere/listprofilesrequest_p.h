// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILESREQUEST_P_H
#define QTAWS_LISTPROFILESREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "listprofilesrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListProfilesRequest;

class ListProfilesRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    ListProfilesRequestPrivate(const RolesAnywhereRequest::Action action,
                                   ListProfilesRequest * const q);
    ListProfilesRequestPrivate(const ListProfilesRequestPrivate &other,
                                   ListProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfilesRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
