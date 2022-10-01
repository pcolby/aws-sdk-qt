// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYENDPOINTRESPONSE_P_H
#define QTAWS_DELETEDBPROXYENDPOINTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyEndpointResponse;

class DeleteDBProxyEndpointResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBProxyEndpointResponsePrivate(DeleteDBProxyEndpointResponse * const q);

    void parseDeleteDBProxyEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBProxyEndpointResponse)
    Q_DISABLE_COPY(DeleteDBProxyEndpointResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
