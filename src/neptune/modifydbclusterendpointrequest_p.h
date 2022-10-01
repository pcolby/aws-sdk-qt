// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERENDPOINTREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERENDPOINTREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifydbclusterendpointrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterEndpointRequest;

class ModifyDBClusterEndpointRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyDBClusterEndpointRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyDBClusterEndpointRequest * const q);
    ModifyDBClusterEndpointRequestPrivate(const ModifyDBClusterEndpointRequestPrivate &other,
                                   ModifyDBClusterEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterEndpointRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
