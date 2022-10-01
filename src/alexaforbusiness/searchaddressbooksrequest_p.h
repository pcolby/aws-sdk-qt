// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHADDRESSBOOKSREQUEST_P_H
#define QTAWS_SEARCHADDRESSBOOKSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "searchaddressbooksrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchAddressBooksRequest;

class SearchAddressBooksRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SearchAddressBooksRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SearchAddressBooksRequest * const q);
    SearchAddressBooksRequestPrivate(const SearchAddressBooksRequestPrivate &other,
                                   SearchAddressBooksRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchAddressBooksRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
