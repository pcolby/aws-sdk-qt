// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALGATEWAYRESPONSE_P_H
#define QTAWS_DELETEVIRTUALGATEWAYRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualGatewayResponse;

class DeleteVirtualGatewayResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteVirtualGatewayResponsePrivate(DeleteVirtualGatewayResponse * const q);

    void parseDeleteVirtualGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualGatewayResponse)
    Q_DISABLE_COPY(DeleteVirtualGatewayResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
