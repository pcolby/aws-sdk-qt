// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORENTITIESRESPONSE_P_H
#define QTAWS_LISTCONNECTORENTITIESRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class ListConnectorEntitiesResponse;

class ListConnectorEntitiesResponsePrivate : public AppflowResponsePrivate {

public:

    explicit ListConnectorEntitiesResponsePrivate(ListConnectorEntitiesResponse * const q);

    void parseListConnectorEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConnectorEntitiesResponse)
    Q_DISABLE_COPY(ListConnectorEntitiesResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
