// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATEREQUEST_H
#define QTAWS_UPDATEROUTINGCONTROLSTATEREQUEST_H

#include "route53recoveryclusterrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStateRequestPrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT UpdateRoutingControlStateRequest : public Route53RecoveryClusterRequest {

public:
    UpdateRoutingControlStateRequest(const UpdateRoutingControlStateRequest &other);
    UpdateRoutingControlStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingControlStateRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
