// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGCONTROLREQUEST_H
#define QTAWS_CREATEROUTINGCONTROLREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateRoutingControlRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT CreateRoutingControlRequest : public Route53RecoveryControlConfigRequest {

public:
    CreateRoutingControlRequest(const CreateRoutingControlRequest &other);
    CreateRoutingControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
