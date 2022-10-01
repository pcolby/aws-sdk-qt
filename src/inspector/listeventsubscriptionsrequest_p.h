// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_LISTEVENTSUBSCRIPTIONSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listeventsubscriptionsrequest.h"

namespace QtAws {
namespace Inspector {

class ListEventSubscriptionsRequest;

class ListEventSubscriptionsRequestPrivate : public InspectorRequestPrivate {

public:
    ListEventSubscriptionsRequestPrivate(const InspectorRequest::Action action,
                                   ListEventSubscriptionsRequest * const q);
    ListEventSubscriptionsRequestPrivate(const ListEventSubscriptionsRequestPrivate &other,
                                   ListEventSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventSubscriptionsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
