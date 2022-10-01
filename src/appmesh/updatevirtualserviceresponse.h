// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALSERVICERESPONSE_H
#define QTAWS_UPDATEVIRTUALSERVICERESPONSE_H

#include "appmeshresponse.h"
#include "updatevirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualServiceResponsePrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualServiceResponse : public AppMeshResponse {
    Q_OBJECT

public:
    UpdateVirtualServiceResponse(const UpdateVirtualServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVirtualServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualServiceResponse)
    Q_DISABLE_COPY(UpdateVirtualServiceResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
