// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTINGCONTROLRESPONSE_P_H
#define QTAWS_DELETEROUTINGCONTROLRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteRoutingControlResponse;

class DeleteRoutingControlResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DeleteRoutingControlResponsePrivate(DeleteRoutingControlResponse * const q);

    void parseDeleteRoutingControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRoutingControlResponse)
    Q_DISABLE_COPY(DeleteRoutingControlResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
