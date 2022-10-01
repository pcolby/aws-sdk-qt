// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_LISTEVENTSUBSCRIPTIONSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListEventSubscriptionsResponse;

class ListEventSubscriptionsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListEventSubscriptionsResponsePrivate(ListEventSubscriptionsResponse * const q);

    void parseListEventSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventSubscriptionsResponse)
    Q_DISABLE_COPY(ListEventSubscriptionsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
