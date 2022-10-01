// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALGATEWAYREQUEST_P_H
#define QTAWS_CREATEVIRTUALGATEWAYREQUEST_P_H

#include "appmeshrequest_p.h"
#include "createvirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualGatewayRequest;

class CreateVirtualGatewayRequestPrivate : public AppMeshRequestPrivate {

public:
    CreateVirtualGatewayRequestPrivate(const AppMeshRequest::Action action,
                                   CreateVirtualGatewayRequest * const q);
    CreateVirtualGatewayRequestPrivate(const CreateVirtualGatewayRequestPrivate &other,
                                   CreateVirtualGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
