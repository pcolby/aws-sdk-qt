// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALGATEWAYSREQUEST_P_H
#define QTAWS_LISTVIRTUALGATEWAYSREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listvirtualgatewaysrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualGatewaysRequest;

class ListVirtualGatewaysRequestPrivate : public AppMeshRequestPrivate {

public:
    ListVirtualGatewaysRequestPrivate(const AppMeshRequest::Action action,
                                   ListVirtualGatewaysRequest * const q);
    ListVirtualGatewaysRequestPrivate(const ListVirtualGatewaysRequestPrivate &other,
                                   ListVirtualGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualGatewaysRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
