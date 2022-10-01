// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGCONTROLRESPONSE_H
#define QTAWS_CREATEROUTINGCONTROLRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "createroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateRoutingControlResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT CreateRoutingControlResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    CreateRoutingControlResponse(const CreateRoutingControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRoutingControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoutingControlResponse)
    Q_DISABLE_COPY(CreateRoutingControlResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
