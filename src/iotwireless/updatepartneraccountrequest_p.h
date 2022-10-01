// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERACCOUNTREQUEST_P_H
#define QTAWS_UPDATEPARTNERACCOUNTREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatepartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePartnerAccountRequest;

class UpdatePartnerAccountRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdatePartnerAccountRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdatePartnerAccountRequest * const q);
    UpdatePartnerAccountRequestPrivate(const UpdatePartnerAccountRequestPrivate &other,
                                   UpdatePartnerAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
