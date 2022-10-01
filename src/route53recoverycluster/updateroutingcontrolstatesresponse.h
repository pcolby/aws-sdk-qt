// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLSTATESRESPONSE_H
#define QTAWS_UPDATEROUTINGCONTROLSTATESRESPONSE_H

#include "route53recoveryclusterresponse.h"
#include "updateroutingcontrolstatesrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class UpdateRoutingControlStatesResponsePrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT UpdateRoutingControlStatesResponse : public Route53RecoveryClusterResponse {
    Q_OBJECT

public:
    UpdateRoutingControlStatesResponse(const UpdateRoutingControlStatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingControlStatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingControlStatesResponse)
    Q_DISABLE_COPY(UpdateRoutingControlStatesResponse)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
