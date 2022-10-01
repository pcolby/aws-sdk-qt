// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALSERVICERESPONSE_H
#define QTAWS_DELETEVIRTUALSERVICERESPONSE_H

#include "appmeshresponse.h"
#include "deletevirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualServiceResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualServiceResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteVirtualServiceResponse(const DeleteVirtualServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVirtualServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualServiceResponse)
    Q_DISABLE_COPY(DeleteVirtualServiceResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
