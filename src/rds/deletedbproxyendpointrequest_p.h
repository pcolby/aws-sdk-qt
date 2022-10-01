// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYENDPOINTREQUEST_P_H
#define QTAWS_DELETEDBPROXYENDPOINTREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbproxyendpointrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyEndpointRequest;

class DeleteDBProxyEndpointRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBProxyEndpointRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBProxyEndpointRequest * const q);
    DeleteDBProxyEndpointRequestPrivate(const DeleteDBProxyEndpointRequestPrivate &other,
                                   DeleteDBProxyEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBProxyEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
