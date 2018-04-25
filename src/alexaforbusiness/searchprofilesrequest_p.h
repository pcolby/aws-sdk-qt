/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SEARCHPROFILESREQUEST_P_H
#define QTAWS_SEARCHPROFILESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchprofilesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchProfilesRequest;

class QTAWS_EXPORT SearchProfilesRequestPrivate : public AlexaForBusinessRequestPrivate {

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
