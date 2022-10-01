// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATERESPONSE_H
#define QTAWS_UPDATEROUTINGCONTROLSTATERESPONSE_H

#include "route53recoveryclusterresponse.h"
#include "updateroutingcontrolstaterequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStateResponsePrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT UpdateRoutingControlStateResponse : public Route53RecoveryClusterResponse {
    Q_OBJECT

public:
    UpdateRoutingControlStateResponse(const UpdateRoutingControlStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingControlStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingControlStateResponse)
    Q_DISABLE_COPY(UpdateRoutingControlStateResponse)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
