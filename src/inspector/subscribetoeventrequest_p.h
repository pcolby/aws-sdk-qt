// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOEVENTREQUEST_P_H
#define QTAWS_SUBSCRIBETOEVENTREQUEST_P_H

#include "inspectorrequest_p.h"
#include "subscribetoeventrequest.h"

namespace QtAws {
namespace Inspector {

class SubscribeToEventRequest;

class SubscribeToEventRequestPrivate : public InspectorRequestPrivate {

public:
    SubscribeToEventRequestPrivate(const InspectorRequest::Action action,
                                   SubscribeToEventRequest * const q);
    SubscribeToEventRequestPrivate(const SubscribeToEventRequestPrivate &other,
                                   SubscribeToEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubscribeToEventRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
