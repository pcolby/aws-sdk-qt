// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTINGCONTROLSTATERESPONSE_H
#define QTAWS_GETROUTINGCONTROLSTATERESPONSE_H

#include "route53recoveryclusterresponse.h"
#include "getroutingcontrolstaterequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class GetRoutingControlStateResponsePrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT GetRoutingControlStateResponse : public Route53RecoveryClusterResponse {
    Q_OBJECT

public:
    GetRoutingControlStateResponse(const GetRoutingControlStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRoutingControlStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoutingControlStateResponse)
    Q_DISABLE_COPY(GetRoutingControlStateResponse)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
