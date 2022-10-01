// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYROUTESREQUEST_P_H
#define QTAWS_LISTGATEWAYROUTESREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listgatewayroutesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListGatewayRoutesRequest;

class ListGatewayRoutesRequestPrivate : public AppMeshRequestPrivate {

public:
    ListGatewayRoutesRequestPrivate(const AppMeshRequest::Action action,
                                   ListGatewayRoutesRequest * const q);
    ListGatewayRoutesRequestPrivate(const ListGatewayRoutesRequestPrivate &other,
                                   ListGatewayRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGatewayRoutesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
