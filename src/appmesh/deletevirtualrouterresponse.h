// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALROUTERRESPONSE_H
#define QTAWS_DELETEVIRTUALROUTERRESPONSE_H

#include "appmeshresponse.h"
#include "deletevirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualRouterResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualRouterResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteVirtualRouterResponse(const DeleteVirtualRouterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVirtualRouterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualRouterResponse)
    Q_DISABLE_COPY(DeleteVirtualRouterResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
