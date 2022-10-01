// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATESRESPONSE_P_H
#define QTAWS_UPDATEROUTINGCONTROLSTATESRESPONSE_P_H

#include "route53recoveryclusterresponse_p.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStatesResponse;

class UpdateRoutingControlStatesResponsePrivate : public Route53RecoveryClusterResponsePrivate {

public:

    explicit UpdateRoutingControlStatesResponsePrivate(UpdateRoutingControlStatesResponse * const q);

    void parseUpdateRoutingControlStatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingControlStatesResponse)
    Q_DISABLE_COPY(UpdateRoutingControlStatesResponsePrivate)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
