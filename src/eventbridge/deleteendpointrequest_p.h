// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_P_H
#define QTAWS_DELETEENDPOINTREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteEndpointRequest;

class DeleteEndpointRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeleteEndpointRequestPrivate(const EventBridgeRequest::Action action,
                                   DeleteEndpointRequest * const q);
    DeleteEndpointRequestPrivate(const DeleteEndpointRequestPrivate &other,
                                   DeleteEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
