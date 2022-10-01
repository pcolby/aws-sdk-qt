// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSRESPONSE_P_H
#define QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSRESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateInstanceCustomHealthStatusResponse;

class UpdateInstanceCustomHealthStatusResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit UpdateInstanceCustomHealthStatusResponsePrivate(UpdateInstanceCustomHealthStatusResponse * const q);

    void parseUpdateInstanceCustomHealthStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceCustomHealthStatusResponse)
    Q_DISABLE_COPY(UpdateInstanceCustomHealthStatusResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
