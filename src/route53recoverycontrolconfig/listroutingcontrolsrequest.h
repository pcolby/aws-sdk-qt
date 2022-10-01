// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGCONTROLSREQUEST_H
#define QTAWS_LISTROUTINGCONTROLSREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListRoutingControlsRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListRoutingControlsRequest : public Route53RecoveryControlConfigRequest {

public:
    ListRoutingControlsRequest(const ListRoutingControlsRequest &other);
    ListRoutingControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutingControlsRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
