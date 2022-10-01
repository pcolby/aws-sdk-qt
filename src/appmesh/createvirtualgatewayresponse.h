// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALGATEWAYRESPONSE_H
#define QTAWS_CREATEVIRTUALGATEWAYRESPONSE_H

#include "appmeshresponse.h"
#include "createvirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualGatewayResponsePrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualGatewayResponse : public AppMeshResponse {
    Q_OBJECT

public:
    CreateVirtualGatewayResponse(const CreateVirtualGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVirtualGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualGatewayResponse)
    Q_DISABLE_COPY(CreateVirtualGatewayResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
