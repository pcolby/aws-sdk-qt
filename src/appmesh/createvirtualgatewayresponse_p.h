// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALGATEWAYRESPONSE_P_H
#define QTAWS_CREATEVIRTUALGATEWAYRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualGatewayResponse;

class CreateVirtualGatewayResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateVirtualGatewayResponsePrivate(CreateVirtualGatewayResponse * const q);

    void parseCreateVirtualGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVirtualGatewayResponse)
    Q_DISABLE_COPY(CreateVirtualGatewayResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
