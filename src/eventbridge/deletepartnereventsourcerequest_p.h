// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_P_H
#define QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deletepartnereventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class DeletePartnerEventSourceRequest;

class DeletePartnerEventSourceRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeletePartnerEventSourceRequestPrivate(const EventBridgeRequest::Action action,
                                   DeletePartnerEventSourceRequest * const q);
    DeletePartnerEventSourceRequestPrivate(const DeletePartnerEventSourceRequestPrivate &other,
                                   DeletePartnerEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePartnerEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
