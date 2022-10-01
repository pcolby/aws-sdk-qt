// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_P_H
#define QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class ListAggregateDiscoveredResourcesResponse;

class ListAggregateDiscoveredResourcesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit ListAggregateDiscoveredResourcesResponsePrivate(ListAggregateDiscoveredResourcesResponse * const q);

    void parseListAggregateDiscoveredResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAggregateDiscoveredResourcesResponse)
    Q_DISABLE_COPY(ListAggregateDiscoveredResourcesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
