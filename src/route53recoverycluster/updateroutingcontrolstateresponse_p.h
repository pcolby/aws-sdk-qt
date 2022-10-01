// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATERESPONSE_P_H
#define QTAWS_UPDATEROUTINGCONTROLSTATERESPONSE_P_H

#include "route53recoveryclusterresponse_p.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStateResponse;

class UpdateRoutingControlStateResponsePrivate : public Route53RecoveryClusterResponsePrivate {

public:

    explicit UpdateRoutingControlStateResponsePrivate(UpdateRoutingControlStateResponse * const q);

    void parseUpdateRoutingControlStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingControlStateResponse)
    Q_DISABLE_COPY(UpdateRoutingControlStateResponsePrivate)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
