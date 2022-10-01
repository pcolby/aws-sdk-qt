// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALGATEWAYREQUEST_P_H
#define QTAWS_DELETEVIRTUALGATEWAYREQUEST_P_H

#include "appmeshrequest_p.h"
#include "deletevirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualGatewayRequest;

class DeleteVirtualGatewayRequestPrivate : public AppMeshRequestPrivate {

public:
    DeleteVirtualGatewayRequestPrivate(const AppMeshRequest::Action action,
                                   DeleteVirtualGatewayRequest * const q);
    DeleteVirtualGatewayRequestPrivate(const DeleteVirtualGatewayRequestPrivate &other,
                                   DeleteVirtualGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
