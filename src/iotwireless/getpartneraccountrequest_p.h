// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTNERACCOUNTREQUEST_P_H
#define QTAWS_GETPARTNERACCOUNTREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getpartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPartnerAccountRequest;

class GetPartnerAccountRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetPartnerAccountRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetPartnerAccountRequest * const q);
    GetPartnerAccountRequestPrivate(const GetPartnerAccountRequestPrivate &other,
                                   GetPartnerAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
