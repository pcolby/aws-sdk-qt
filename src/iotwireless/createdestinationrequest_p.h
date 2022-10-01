// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDESTINATIONREQUEST_P_H
#define QTAWS_CREATEDESTINATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createdestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateDestinationRequest;

class CreateDestinationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateDestinationRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateDestinationRequest * const q);
    CreateDestinationRequestPrivate(const CreateDestinationRequestPrivate &other,
                                   CreateDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
