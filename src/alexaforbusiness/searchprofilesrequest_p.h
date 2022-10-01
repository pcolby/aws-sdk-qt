// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROFILESREQUEST_P_H
#define QTAWS_SEARCHPROFILESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchprofilesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchProfilesRequest;

class SearchProfilesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchProfilesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchProfilesRequest * const q);
    SearchProfilesRequestPrivate(const SearchProfilesRequestPrivate &other,
                                   SearchProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchProfilesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
