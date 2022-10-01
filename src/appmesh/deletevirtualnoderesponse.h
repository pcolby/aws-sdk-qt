// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALNODERESPONSE_H
#define QTAWS_DELETEVIRTUALNODERESPONSE_H

#include "appmeshresponse.h"
#include "deletevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualNodeResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualNodeResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteVirtualNodeResponse(const DeleteVirtualNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVirtualNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualNodeResponse)
    Q_DISABLE_COPY(DeleteVirtualNodeResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
