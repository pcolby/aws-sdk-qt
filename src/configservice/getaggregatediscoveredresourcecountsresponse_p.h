// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSRESPONSE_P_H
#define QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateDiscoveredResourceCountsResponse;

class GetAggregateDiscoveredResourceCountsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetAggregateDiscoveredResourceCountsResponsePrivate(GetAggregateDiscoveredResourceCountsResponse * const q);

    void parseGetAggregateDiscoveredResourceCountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAggregateDiscoveredResourceCountsResponse)
    Q_DISABLE_COPY(GetAggregateDiscoveredResourceCountsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
