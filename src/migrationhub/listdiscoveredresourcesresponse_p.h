// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVEREDRESOURCESRESPONSE_P_H
#define QTAWS_LISTDISCOVEREDRESOURCESRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class ListDiscoveredResourcesResponse;

class ListDiscoveredResourcesResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit ListDiscoveredResourcesResponsePrivate(ListDiscoveredResourcesResponse * const q);

    void parseListDiscoveredResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDiscoveredResourcesResponse)
    Q_DISABLE_COPY(ListDiscoveredResourcesResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
