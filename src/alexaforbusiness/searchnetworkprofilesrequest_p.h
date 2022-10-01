// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHNETWORKPROFILESREQUEST_P_H
#define QTAWS_SEARCHNETWORKPROFILESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchnetworkprofilesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchNetworkProfilesRequest;

class SearchNetworkProfilesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchNetworkProfilesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchNetworkProfilesRequest * const q);
    SearchNetworkProfilesRequestPrivate(const SearchNetworkProfilesRequestPrivate &other,
                                   SearchNetworkProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchNetworkProfilesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
