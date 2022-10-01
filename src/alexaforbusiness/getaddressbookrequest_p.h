// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADDRESSBOOKREQUEST_P_H
#define QTAWS_GETADDRESSBOOKREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getaddressbookrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetAddressBookRequest;

class GetAddressBookRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetAddressBookRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetAddressBookRequest * const q);
    GetAddressBookRequestPrivate(const GetAddressBookRequestPrivate &other,
                                   GetAddressBookRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
