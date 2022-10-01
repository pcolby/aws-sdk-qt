// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTBUSREQUEST_P_H
#define QTAWS_DELETEEVENTBUSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deleteeventbusrequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteEventBusRequest;

class DeleteEventBusRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeleteEventBusRequestPrivate(const EventBridgeRequest::Action action,
                                   DeleteEventBusRequest * const q);
    DeleteEventBusRequestPrivate(const DeleteEventBusRequestPrivate &other,
                                   DeleteEventBusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventBusRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
