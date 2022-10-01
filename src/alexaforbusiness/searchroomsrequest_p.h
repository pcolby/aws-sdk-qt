// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROOMSREQUEST_P_H
#define QTAWS_SEARCHROOMSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchroomsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchRoomsRequest;

class SearchRoomsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchRoomsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchRoomsRequest * const q);
    SearchRoomsRequestPrivate(const SearchRoomsRequestPrivate &other,
                                   SearchRoomsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchRoomsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
