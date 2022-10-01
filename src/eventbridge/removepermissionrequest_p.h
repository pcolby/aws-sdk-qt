// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONREQUEST_P_H
#define QTAWS_REMOVEPERMISSIONREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "removepermissionrequest.h"

namespace QtAws {
namespace EventBridge {

class RemovePermissionRequest;

class RemovePermissionRequestPrivate : public EventBridgeRequestPrivate {

public:
    RemovePermissionRequestPrivate(const EventBridgeRequest::Action action,
                                   RemovePermissionRequest * const q);
    RemovePermissionRequestPrivate(const RemovePermissionRequestPrivate &other,
                                   RemovePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemovePermissionRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
