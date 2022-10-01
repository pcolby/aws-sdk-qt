// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYROUTESRESPONSE_P_H
#define QTAWS_LISTGATEWAYROUTESRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class ListGatewayRoutesResponse;

class ListGatewayRoutesResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit ListGatewayRoutesResponsePrivate(ListGatewayRoutesResponse * const q);

    void parseListGatewayRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGatewayRoutesResponse)
    Q_DISABLE_COPY(ListGatewayRoutesResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
