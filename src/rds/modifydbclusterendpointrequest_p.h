// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERENDPOINTREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERENDPOINTREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbclusterendpointrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterEndpointRequest;

class ModifyDBClusterEndpointRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBClusterEndpointRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBClusterEndpointRequest * const q);
    ModifyDBClusterEndpointRequestPrivate(const ModifyDBClusterEndpointRequestPrivate &other,
                                   ModifyDBClusterEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterEndpointRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
