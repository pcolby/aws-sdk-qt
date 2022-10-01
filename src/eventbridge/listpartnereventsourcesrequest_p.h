// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCESREQUEST_P_H
#define QTAWS_LISTPARTNEREVENTSOURCESREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listpartnereventsourcesrequest.h"

namespace QtAws {
namespace EventBridge {

class ListPartnerEventSourcesRequest;

class ListPartnerEventSourcesRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListPartnerEventSourcesRequestPrivate(const EventBridgeRequest::Action action,
                                   ListPartnerEventSourcesRequest * const q);
    ListPartnerEventSourcesRequestPrivate(const ListPartnerEventSourcesRequestPrivate &other,
                                   ListPartnerEventSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPartnerEventSourcesRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
