// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_P_H

#include "rdsrequest_p.h"
#include "createdbclusterendpointrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterEndpointRequest;

class CreateDBClusterEndpointRequestPrivate : public RdsRequestPrivate {

public:
    CreateDBClusterEndpointRequestPrivate(const RdsRequest::Action action,
                                   CreateDBClusterEndpointRequest * const q);
    CreateDBClusterEndpointRequestPrivate(const CreateDBClusterEndpointRequestPrivate &other,
                                   CreateDBClusterEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
