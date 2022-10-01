// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTINGCONTROLSTATEREQUEST_H
#define QTAWS_GETROUTINGCONTROLSTATEREQUEST_H

#include "route53recoveryclusterrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class GetRoutingControlStateRequestPrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT GetRoutingControlStateRequest : public Route53RecoveryClusterRequest {

public:
    GetRoutingControlStateRequest(const GetRoutingControlStateRequest &other);
    GetRoutingControlStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoutingControlStateRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
