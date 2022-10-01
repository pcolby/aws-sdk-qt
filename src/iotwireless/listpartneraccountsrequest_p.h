// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNERACCOUNTSREQUEST_P_H
#define QTAWS_LISTPARTNERACCOUNTSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listpartneraccountsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListPartnerAccountsRequest;

class ListPartnerAccountsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListPartnerAccountsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListPartnerAccountsRequest * const q);
    ListPartnerAccountsRequestPrivate(const ListPartnerAccountsRequestPrivate &other,
                                   ListPartnerAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPartnerAccountsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
