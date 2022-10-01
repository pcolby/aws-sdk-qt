// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROFILESREQUEST_P_H
#define QTAWS_SEARCHPROFILESREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "searchprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class SearchProfilesRequest;

class SearchProfilesRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    SearchProfilesRequestPrivate(const CustomerProfilesRequest::Action action,
                                   SearchProfilesRequest * const q);
    SearchProfilesRequestPrivate(const SearchProfilesRequestPrivate &other,
                                   SearchProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchProfilesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
