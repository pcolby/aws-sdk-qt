// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVEREDRESOURCESRESPONSE_P_H
#define QTAWS_LISTDISCOVEREDRESOURCESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class ListDiscoveredResourcesResponse;

class ListDiscoveredResourcesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit ListDiscoveredResourcesResponsePrivate(ListDiscoveredResourcesResponse * const q);

    void parseListDiscoveredResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDiscoveredResourcesResponse)
    Q_DISABLE_COPY(ListDiscoveredResourcesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
