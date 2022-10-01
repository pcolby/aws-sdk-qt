// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATESREQUEST_H
#define QTAWS_UPDATEROUTINGCONTROLSTATESREQUEST_H

#include "route53recoveryclusterrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStatesRequestPrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT UpdateRoutingControlStatesRequest : public Route53RecoveryClusterRequest {

public:
    UpdateRoutingControlStatesRequest(const UpdateRoutingControlStatesRequest &other);
    UpdateRoutingControlStatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingControlStatesRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
