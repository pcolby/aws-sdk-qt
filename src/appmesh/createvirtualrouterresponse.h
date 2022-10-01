// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALROUTERRESPONSE_H
#define QTAWS_CREATEVIRTUALROUTERRESPONSE_H

#include "appmeshresponse.h"
#include "createvirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualRouterResponsePrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualRouterResponse : public AppMeshResponse {
    Q_OBJECT

public:
    CreateVirtualRouterResponse(const CreateVirtualRouterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVirtualRouterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualRouterResponse)
    Q_DISABLE_COPY(CreateVirtualRouterResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
