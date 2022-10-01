// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDESTINATIONREQUEST_P_H
#define QTAWS_UPDATEDESTINATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatedestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateDestinationRequest;

class UpdateDestinationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateDestinationRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateDestinationRequest * const q);
    UpdateDestinationRequestPrivate(const UpdateDestinationRequestPrivate &other,
                                   UpdateDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
