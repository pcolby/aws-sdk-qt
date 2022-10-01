// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTINGCONTROLRESPONSE_H
#define QTAWS_DELETEROUTINGCONTROLRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "deleteroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteRoutingControlResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DeleteRoutingControlResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DeleteRoutingControlResponse(const DeleteRoutingControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRoutingControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoutingControlResponse)
    Q_DISABLE_COPY(DeleteRoutingControlResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
