// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSV2REQUEST_P_H
#define QTAWS_LISTPHONENUMBERSV2REQUEST_P_H

#include "connectrequest_p.h"
#include "listphonenumbersv2request.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersV2Request;

class ListPhoneNumbersV2RequestPrivate : public ConnectRequestPrivate {

public:
    ListPhoneNumbersV2RequestPrivate(const ConnectRequest::Action action,
                                   ListPhoneNumbersV2Request * const q);
    ListPhoneNumbersV2RequestPrivate(const ListPhoneNumbersV2RequestPrivate &other,
                                   ListPhoneNumbersV2Request * const q);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersV2Request)

};

} // namespace Connect
} // namespace QtAws

#endif
