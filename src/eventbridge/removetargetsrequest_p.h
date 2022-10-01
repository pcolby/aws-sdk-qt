// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETARGETSREQUEST_P_H
#define QTAWS_REMOVETARGETSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "removetargetsrequest.h"

namespace QtAws {
namespace EventBridge {

class RemoveTargetsRequest;

class RemoveTargetsRequestPrivate : public EventBridgeRequestPrivate {

public:
    RemoveTargetsRequestPrivate(const EventBridgeRequest::Action action,
                                   RemoveTargetsRequest * const q);
    RemoveTargetsRequestPrivate(const RemoveTargetsRequestPrivate &other,
                                   RemoveTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTargetsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
