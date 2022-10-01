// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSECURITYPROFILESREQUEST_P_H
#define QTAWS_SEARCHSECURITYPROFILESREQUEST_P_H

#include "connectrequest_p.h"
#include "searchsecurityprofilesrequest.h"

namespace QtAws {
namespace Connect {

class SearchSecurityProfilesRequest;

class SearchSecurityProfilesRequestPrivate : public ConnectRequestPrivate {

public:
    SearchSecurityProfilesRequestPrivate(const ConnectRequest::Action action,
                                   SearchSecurityProfilesRequest * const q);
    SearchSecurityProfilesRequestPrivate(const SearchSecurityProfilesRequestPrivate &other,
                                   SearchSecurityProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchSecurityProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
