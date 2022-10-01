// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYENDPOINTREQUEST_P_H
#define QTAWS_CREATEDBPROXYENDPOINTREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbproxyendpointrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyEndpointRequest;

class CreateDBProxyEndpointRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBProxyEndpointRequestPrivate(const RdsRequest::Action action,
                                   CreateDBProxyEndpointRequest * const q);
    CreateDBProxyEndpointRequestPrivate(const CreateDBProxyEndpointRequestPrivate &other,
                                   CreateDBProxyEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBProxyEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
