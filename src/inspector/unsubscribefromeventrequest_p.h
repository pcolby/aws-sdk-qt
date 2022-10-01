// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMEVENTREQUEST_P_H
#define QTAWS_UNSUBSCRIBEFROMEVENTREQUEST_P_H

#include "inspectorrequest_p.h"
#include "unsubscribefromeventrequest.h"

namespace QtAws {
namespace Inspector {

class UnsubscribeFromEventRequest;

class UnsubscribeFromEventRequestPrivate : public InspectorRequestPrivate {

public:
    UnsubscribeFromEventRequestPrivate(const InspectorRequest::Action action,
                                   UnsubscribeFromEventRequest * const q);
    UnsubscribeFromEventRequestPrivate(const UnsubscribeFromEventRequestPrivate &other,
                                   UnsubscribeFromEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnsubscribeFromEventRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
