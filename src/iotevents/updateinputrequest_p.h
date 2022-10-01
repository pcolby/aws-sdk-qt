// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTREQUEST_P_H
#define QTAWS_UPDATEINPUTREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "updateinputrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateInputRequest;

class UpdateInputRequestPrivate : public IoTEventsRequestPrivate {

public:
    UpdateInputRequestPrivate(const IoTEventsRequest::Action action,
                                   UpdateInputRequest * const q);
    UpdateInputRequestPrivate(const UpdateInputRequestPrivate &other,
                                   UpdateInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInputRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
