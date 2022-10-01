// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALGATEWAYRESPONSE_P_H
#define QTAWS_UPDATEVIRTUALGATEWAYRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualGatewayResponse;

class UpdateVirtualGatewayResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateVirtualGatewayResponsePrivate(UpdateVirtualGatewayResponse * const q);

    void parseUpdateVirtualGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualGatewayResponse)
    Q_DISABLE_COPY(UpdateVirtualGatewayResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
