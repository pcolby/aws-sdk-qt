// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTACTSREQUEST_P_H
#define QTAWS_SEARCHCONTACTSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchcontactsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchContactsRequest;

class SearchContactsRequestPrivate : public AlexaForBusinessRequestPrivate {

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
