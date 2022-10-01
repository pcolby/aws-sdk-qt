// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGCONTROLRESPONSE_P_H
#define QTAWS_DESCRIBEROUTINGCONTROLRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeRoutingControlResponse;

class DescribeRoutingControlResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DescribeRoutingControlResponsePrivate(DescribeRoutingControlResponse * const q);

    void parseDescribeRoutingControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRoutingControlResponse)
    Q_DISABLE_COPY(DescribeRoutingControlResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
