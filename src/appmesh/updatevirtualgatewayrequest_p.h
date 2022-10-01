// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALGATEWAYREQUEST_P_H
#define QTAWS_UPDATEVIRTUALGATEWAYREQUEST_P_H

#include "appmeshrequest_p.h"
#include "updatevirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualGatewayRequest;

class UpdateVirtualGatewayRequestPrivate : public AppMeshRequestPrivate {

public:
    UpdateVirtualGatewayRequestPrivate(const AppMeshRequest::Action action,
                                   UpdateVirtualGatewayRequest * const q);
    UpdateVirtualGatewayRequestPrivate(const UpdateVirtualGatewayRequestPrivate &other,
                                   UpdateVirtualGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
