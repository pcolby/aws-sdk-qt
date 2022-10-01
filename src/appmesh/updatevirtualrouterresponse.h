// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALROUTERRESPONSE_H
#define QTAWS_UPDATEVIRTUALROUTERRESPONSE_H

#include "appmeshresponse.h"
#include "updatevirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualRouterResponsePrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualRouterResponse : public AppMeshResponse {
    Q_OBJECT

public:
    UpdateVirtualRouterResponse(const UpdateVirtualRouterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVirtualRouterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualRouterResponse)
    Q_DISABLE_COPY(UpdateVirtualRouterResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
