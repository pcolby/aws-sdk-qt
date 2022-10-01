// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTINGCONTROLREQUEST_H
#define QTAWS_DELETEROUTINGCONTROLREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteRoutingControlRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DeleteRoutingControlRequest : public Route53RecoveryControlConfigRequest {

public:
    DeleteRoutingControlRequest(const DeleteRoutingControlRequest &other);
    DeleteRoutingControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoutingControlRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
