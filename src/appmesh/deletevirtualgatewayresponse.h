// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALGATEWAYRESPONSE_H
#define QTAWS_DELETEVIRTUALGATEWAYRESPONSE_H

#include "appmeshresponse.h"
#include "deletevirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualGatewayResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualGatewayResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteVirtualGatewayResponse(const DeleteVirtualGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVirtualGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualGatewayResponse)
    Q_DISABLE_COPY(DeleteVirtualGatewayResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
