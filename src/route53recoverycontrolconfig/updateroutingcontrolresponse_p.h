// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLRESPONSE_P_H
#define QTAWS_UPDATEROUTINGCONTROLRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateRoutingControlResponse;

class UpdateRoutingControlResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit UpdateRoutingControlResponsePrivate(UpdateRoutingControlResponse * const q);

    void parseUpdateRoutingControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingControlResponse)
    Q_DISABLE_COPY(UpdateRoutingControlResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
