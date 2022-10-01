// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGCONTROLRESPONSE_H
#define QTAWS_DESCRIBEROUTINGCONTROLRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "describeroutingcontrolrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeRoutingControlResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeRoutingControlResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    DescribeRoutingControlResponse(const DescribeRoutingControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRoutingControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRoutingControlResponse)
    Q_DISABLE_COPY(DescribeRoutingControlResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
