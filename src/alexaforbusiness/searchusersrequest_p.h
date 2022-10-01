// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHUSERSREQUEST_P_H
#define QTAWS_SEARCHUSERSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchusersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchUsersRequest;

class SearchUsersRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchUsersRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchUsersRequest * const q);
    SearchUsersRequestPrivate(const SearchUsersRequestPrivate &other,
                                   SearchUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchUsersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
