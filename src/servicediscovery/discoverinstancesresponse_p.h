// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINSTANCESRESPONSE_P_H
#define QTAWS_DISCOVERINSTANCESRESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class DiscoverInstancesResponse;

class DiscoverInstancesResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit DiscoverInstancesResponsePrivate(DiscoverInstancesResponse * const q);

    void parseDiscoverInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DiscoverInstancesResponse)
    Q_DISABLE_COPY(DiscoverInstancesResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
