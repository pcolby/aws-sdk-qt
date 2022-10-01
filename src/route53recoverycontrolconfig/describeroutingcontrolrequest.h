// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGCONTROLREQUEST_H
#define QTAWS_DESCRIBEROUTINGCONTROLREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeRoutingControlRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeRoutingControlRequest : public Route53RecoveryControlConfigRequest {

public:
    DescribeRoutingControlRequest(const DescribeRoutingControlRequest &other);
    DescribeRoutingControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
