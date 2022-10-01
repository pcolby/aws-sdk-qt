// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYENDPOINTREQUEST_P_H
#define QTAWS_MODIFYDBPROXYENDPOINTREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbproxyendpointrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyEndpointRequest;

class ModifyDBProxyEndpointRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBProxyEndpointRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBProxyEndpointRequest * const q);
    ModifyDBProxyEndpointRequestPrivate(const ModifyDBProxyEndpointRequestPrivate &other,
                                   ModifyDBProxyEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
