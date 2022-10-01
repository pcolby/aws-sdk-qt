// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSREQUEST_P_H
#define QTAWS_LISTPHONENUMBERSREQUEST_P_H

#include "connectrequest_p.h"
#include "listphonenumbersrequest.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersRequest;

class ListPhoneNumbersRequestPrivate : public ConnectRequestPrivate {

public:
    ListPhoneNumbersRequestPrivate(const ConnectRequest::Action action,
                                   ListPhoneNumbersRequest * const q);
    ListPhoneNumbersRequestPrivate(const ListPhoneNumbersRequestPrivate &other,
                                   ListPhoneNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
