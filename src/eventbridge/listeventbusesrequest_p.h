// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTBUSESREQUEST_P_H
#define QTAWS_LISTEVENTBUSESREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listeventbusesrequest.h"

namespace QtAws {
namespace EventBridge {

class ListEventBusesRequest;

class ListEventBusesRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListEventBusesRequestPrivate(const EventBridgeRequest::Action action,
                                   ListEventBusesRequest * const q);
    ListEventBusesRequestPrivate(const ListEventBusesRequestPrivate &other,
                                   ListEventBusesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventBusesRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
