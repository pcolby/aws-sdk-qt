// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESREQUEST_P_H
#define QTAWS_LISTRULESREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listrulesrequest.h"

namespace QtAws {
namespace EventBridge {

class ListRulesRequest;

class ListRulesRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListRulesRequestPrivate(const EventBridgeRequest::Action action,
                                   ListRulesRequest * const q);
    ListRulesRequestPrivate(const ListRulesRequestPrivate &other,
                                   ListRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRulesRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
