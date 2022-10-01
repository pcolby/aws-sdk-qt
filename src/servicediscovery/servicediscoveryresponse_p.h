// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEDISCOVERYRESPONSE_P_H
#define QTAWS_SERVICEDISCOVERYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryResponse;

class ServiceDiscoveryResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ServiceDiscoveryResponsePrivate(ServiceDiscoveryResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ServiceDiscoveryResponse)
    Q_DISABLE_COPY(ServiceDiscoveryResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
