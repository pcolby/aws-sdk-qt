// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDESTINATIONREQUEST_P_H
#define QTAWS_DELETEDESTINATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletedestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDestinationRequest;

class DeleteDestinationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteDestinationRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteDestinationRequest * const q);
    DeleteDestinationRequestPrivate(const DeleteDestinationRequestPrivate &other,
                                   DeleteDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
