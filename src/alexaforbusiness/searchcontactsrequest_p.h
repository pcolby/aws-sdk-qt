/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SEARCHCONTACTSREQUEST_P_H
#define QTAWS_SEARCHCONTACTSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchcontactsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchContactsRequest;

class QTAWS_EXPORT SearchContactsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchContactsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchContactsRequest * const q);
    SearchContactsRequestPrivate(const SearchContactsRequestPrivate &other,
                                   SearchContactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchContactsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
