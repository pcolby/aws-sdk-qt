// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMATCHESREQUEST_P_H
#define QTAWS_GETMATCHESREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getmatchesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetMatchesRequest;

class GetMatchesRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetMatchesRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetMatchesRequest * const q);
    GetMatchesRequestPrivate(const GetMatchesRequestPrivate &other,
                                   GetMatchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMatchesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
