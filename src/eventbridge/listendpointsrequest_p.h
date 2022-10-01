// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSREQUEST_P_H
#define QTAWS_LISTENDPOINTSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listendpointsrequest.h"

namespace QtAws {
namespace EventBridge {

class ListEndpointsRequest;

class ListEndpointsRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListEndpointsRequestPrivate(const EventBridgeRequest::Action action,
                                   ListEndpointsRequest * const q);
    ListEndpointsRequestPrivate(const ListEndpointsRequestPrivate &other,
                                   ListEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
