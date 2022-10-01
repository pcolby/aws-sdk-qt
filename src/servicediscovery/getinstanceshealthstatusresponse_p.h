// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESHEALTHSTATUSRESPONSE_P_H
#define QTAWS_GETINSTANCESHEALTHSTATUSRESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetInstancesHealthStatusResponse;

class GetInstancesHealthStatusResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit GetInstancesHealthStatusResponsePrivate(GetInstancesHealthStatusResponse * const q);

    void parseGetInstancesHealthStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstancesHealthStatusResponse)
    Q_DISABLE_COPY(GetInstancesHealthStatusResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
