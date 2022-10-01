// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGCONTROLSRESPONSE_P_H
#define QTAWS_LISTROUTINGCONTROLSRESPONSE_P_H

#include "route53recoveryclusterresponse_p.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class ListRoutingControlsResponse;

class ListRoutingControlsResponsePrivate : public Route53RecoveryClusterResponsePrivate {

public:

    explicit ListRoutingControlsResponsePrivate(ListRoutingControlsResponse * const q);

    void parseListRoutingControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoutingControlsResponse)
    Q_DISABLE_COPY(ListRoutingControlsResponsePrivate)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
