// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERRESPONSE_P_H
#define QTAWS_ROUTE53RECOVERYCLUSTERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterResponse;

class Route53RecoveryClusterResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Route53RecoveryClusterResponsePrivate(Route53RecoveryClusterResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryClusterResponse)
    Q_DISABLE_COPY(Route53RecoveryClusterResponsePrivate)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
