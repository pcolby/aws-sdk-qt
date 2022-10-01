// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTBUSREQUEST_P_H
#define QTAWS_CREATEEVENTBUSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "createeventbusrequest.h"

namespace QtAws {
namespace EventBridge {

class CreateEventBusRequest;

class CreateEventBusRequestPrivate : public EventBridgeRequestPrivate {

public:
    CreateEventBusRequestPrivate(const EventBridgeRequest::Action action,
                                   CreateEventBusRequest * const q);
    CreateEventBusRequestPrivate(const CreateEventBusRequestPrivate &other,
                                   CreateEventBusRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventBusRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
