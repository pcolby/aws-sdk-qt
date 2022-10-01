// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGCONTROLRESPONSE_P_H
#define QTAWS_CREATEROUTINGCONTROLRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateRoutingControlResponse;

class CreateRoutingControlResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit CreateRoutingControlResponsePrivate(CreateRoutingControlResponse * const q);

    void parseCreateRoutingControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRoutingControlResponse)
    Q_DISABLE_COPY(CreateRoutingControlResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
