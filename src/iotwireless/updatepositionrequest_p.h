// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOSITIONREQUEST_P_H
#define QTAWS_UPDATEPOSITIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatepositionrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePositionRequest;

class UpdatePositionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdatePositionRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdatePositionRequest * const q);
    UpdatePositionRequestPrivate(const UpdatePositionRequestPrivate &other,
                                   UpdatePositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePositionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
