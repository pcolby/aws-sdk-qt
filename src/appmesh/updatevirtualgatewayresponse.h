// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALGATEWAYRESPONSE_H
#define QTAWS_UPDATEVIRTUALGATEWAYRESPONSE_H

#include "appmeshresponse.h"
#include "updatevirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualGatewayResponsePrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualGatewayResponse : public AppMeshResponse {
    Q_OBJECT

public:
    UpdateVirtualGatewayResponse(const UpdateVirtualGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVirtualGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualGatewayResponse)
    Q_DISABLE_COPY(UpdateVirtualGatewayResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
