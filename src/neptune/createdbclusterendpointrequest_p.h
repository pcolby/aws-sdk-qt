// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERENDPOINTREQUEST_P_H

#include "neptunerequest_p.h"
#include "createdbclusterendpointrequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterEndpointRequest;

class CreateDBClusterEndpointRequestPrivate : public NeptuneRequestPrivate {

public:
    CreateDBClusterEndpointRequestPrivate(const NeptuneRequest::Action action,
                                   CreateDBClusterEndpointRequest * const q);
    CreateDBClusterEndpointRequestPrivate(const CreateDBClusterEndpointRequestPrivate &other,
                                   CreateDBClusterEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterEndpointRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
