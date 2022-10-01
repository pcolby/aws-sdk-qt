// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYENDPOINTRESPONSE_P_H
#define QTAWS_CREATEDBPROXYENDPOINTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyEndpointResponse;

class CreateDBProxyEndpointResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBProxyEndpointResponsePrivate(CreateDBProxyEndpointResponse * const q);

    void parseCreateDBProxyEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBProxyEndpointResponse)
    Q_DISABLE_COPY(CreateDBProxyEndpointResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
