// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALSERVICERESPONSE_H
#define QTAWS_CREATEVIRTUALSERVICERESPONSE_H

#include "appmeshresponse.h"
#include "createvirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualServiceResponsePrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualServiceResponse : public AppMeshResponse {
    Q_OBJECT

public:
    CreateVirtualServiceResponse(const CreateVirtualServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVirtualServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualServiceResponse)
    Q_DISABLE_COPY(CreateVirtualServiceResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
