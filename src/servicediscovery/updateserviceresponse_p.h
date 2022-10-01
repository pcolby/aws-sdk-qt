// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICERESPONSE_P_H
#define QTAWS_UPDATESERVICERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateServiceResponse;

class UpdateServiceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit UpdateServiceResponsePrivate(UpdateServiceResponse * const q);

    void parseUpdateServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceResponse)
    Q_DISABLE_COPY(UpdateServiceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
