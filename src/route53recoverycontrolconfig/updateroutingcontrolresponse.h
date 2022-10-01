// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGCONTROLRESPONSE_H
#define QTAWS_UPDATEROUTINGCONTROLRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "updateroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateRoutingControlResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT UpdateRoutingControlResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    UpdateRoutingControlResponse(const UpdateRoutingControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingControlResponse)
    Q_DISABLE_COPY(UpdateRoutingControlResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
