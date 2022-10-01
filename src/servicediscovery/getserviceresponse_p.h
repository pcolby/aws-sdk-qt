// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICERESPONSE_P_H
#define QTAWS_GETSERVICERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetServiceResponse;

class GetServiceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit GetServiceResponsePrivate(GetServiceResponse * const q);

    void parseGetServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceResponse)
    Q_DISABLE_COPY(GetServiceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
