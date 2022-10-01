// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYENDPOINTRESPONSE_P_H
#define QTAWS_MODIFYDBPROXYENDPOINTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyEndpointResponse;

class ModifyDBProxyEndpointResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBProxyEndpointResponsePrivate(ModifyDBProxyEndpointResponse * const q);

    void parseModifyDBProxyEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyEndpointResponse)
    Q_DISABLE_COPY(ModifyDBProxyEndpointResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
