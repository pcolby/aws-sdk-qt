// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDESTINATIONREQUEST_P_H
#define QTAWS_GETDESTINATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getdestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetDestinationRequest;

class GetDestinationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetDestinationRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetDestinationRequest * const q);
    GetDestinationRequestPrivate(const GetDestinationRequestPrivate &other,
                                   GetDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
