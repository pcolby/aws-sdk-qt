// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGRESPONSE_P_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigResponse;

class Route53RecoveryControlConfigResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53RecoveryControlConfigResponsePrivate(Route53RecoveryControlConfigResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryControlConfigResponse)
    Q_DISABLE_COPY(Route53RecoveryControlConfigResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
