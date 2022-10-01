// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPROFILESREQUEST_P_H
#define QTAWS_LISTUSERPROFILESREQUEST_P_H

#include "codestarrequest_p.h"
#include "listuserprofilesrequest.h"

namespace QtAws {
namespace CodeStar {

class ListUserProfilesRequest;

class ListUserProfilesRequestPrivate : public CodeStarRequestPrivate {

public:
    ListUserProfilesRequestPrivate(const CodeStarRequest::Action action,
                                   ListUserProfilesRequest * const q);
    ListUserProfilesRequestPrivate(const ListUserProfilesRequestPrivate &other,
                                   ListUserProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserProfilesRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
