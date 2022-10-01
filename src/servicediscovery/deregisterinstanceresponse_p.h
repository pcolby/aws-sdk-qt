// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCERESPONSE_P_H
#define QTAWS_DEREGISTERINSTANCERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeregisterInstanceResponse;

class DeregisterInstanceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit DeregisterInstanceResponsePrivate(DeregisterInstanceResponse * const q);

    void parseDeregisterInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterInstanceResponse)
    Q_DISABLE_COPY(DeregisterInstanceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
