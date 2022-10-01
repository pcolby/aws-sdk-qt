// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROUTINGPROFILESREQUEST_P_H
#define QTAWS_SEARCHROUTINGPROFILESREQUEST_P_H

#include "connectrequest_p.h"
#include "searchroutingprofilesrequest.h"

namespace QtAws {
namespace Connect {

class SearchRoutingProfilesRequest;

class SearchRoutingProfilesRequestPrivate : public ConnectRequestPrivate {

public:
    SearchRoutingProfilesRequestPrivate(const ConnectRequest::Action action,
                                   SearchRoutingProfilesRequest * const q);
    SearchRoutingProfilesRequestPrivate(const SearchRoutingProfilesRequestPrivate &other,
                                   SearchRoutingProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchRoutingProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
