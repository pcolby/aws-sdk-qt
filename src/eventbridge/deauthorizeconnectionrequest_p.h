// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONREQUEST_P_H
#define QTAWS_DEAUTHORIZECONNECTIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deauthorizeconnectionrequest.h"

namespace QtAws {
namespace EventBridge {

class DeauthorizeConnectionRequest;

class DeauthorizeConnectionRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeauthorizeConnectionRequestPrivate(const EventBridgeRequest::Action action,
                                   DeauthorizeConnectionRequest * const q);
    DeauthorizeConnectionRequestPrivate(const DeauthorizeConnectionRequestPrivate &other,
                                   DeauthorizeConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeauthorizeConnectionRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
