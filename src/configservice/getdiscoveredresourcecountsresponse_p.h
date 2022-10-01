// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDRESOURCECOUNTSRESPONSE_P_H
#define QTAWS_GETDISCOVEREDRESOURCECOUNTSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetDiscoveredResourceCountsResponse;

class GetDiscoveredResourceCountsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetDiscoveredResourceCountsResponsePrivate(GetDiscoveredResourceCountsResponse * const q);

    void parseGetDiscoveredResourceCountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDiscoveredResourceCountsResponse)
    Q_DISABLE_COPY(GetDiscoveredResourceCountsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
