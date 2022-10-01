// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERENDPOINTREQUEST_P_H
#define QTAWS_DELETEDBCLUSTERENDPOINTREQUEST_P_H

#include "neptunerequest_p.h"
#include "deletedbclusterendpointrequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterEndpointRequest;

class DeleteDBClusterEndpointRequestPrivate : public NeptuneRequestPrivate {

public:
    DeleteDBClusterEndpointRequestPrivate(const NeptuneRequest::Action action,
                                   DeleteDBClusterEndpointRequest * const q);
    DeleteDBClusterEndpointRequestPrivate(const DeleteDBClusterEndpointRequestPrivate &other,
                                   DeleteDBClusterEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterEndpointRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
