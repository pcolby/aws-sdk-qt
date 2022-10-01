// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYROUTESRESPONSE_H
#define QTAWS_LISTGATEWAYROUTESRESPONSE_H

#include "appmeshresponse.h"
#include "listgatewayroutesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListGatewayRoutesResponsePrivate;

class QTAWSAPPMESH_EXPORT ListGatewayRoutesResponse : public AppMeshResponse {
    Q_OBJECT

public:
    ListGatewayRoutesResponse(const ListGatewayRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGatewayRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewayRoutesResponse)
    Q_DISABLE_COPY(ListGatewayRoutesResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
