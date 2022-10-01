// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYREADINESSRESPONSE_P_H
#define QTAWS_ROUTE53RECOVERYREADINESSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessResponse;

class Route53RecoveryReadinessResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53RecoveryReadinessResponsePrivate(Route53RecoveryReadinessResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryReadinessResponse)
    Q_DISABLE_COPY(Route53RecoveryReadinessResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
