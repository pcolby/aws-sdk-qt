// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALNODERESPONSE_H
#define QTAWS_UPDATEVIRTUALNODERESPONSE_H

#include "appmeshresponse.h"
#include "updatevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualNodeResponsePrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualNodeResponse : public AppMeshResponse {
    Q_OBJECT

public:
    UpdateVirtualNodeResponse(const UpdateVirtualNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVirtualNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualNodeResponse)
    Q_DISABLE_COPY(UpdateVirtualNodeResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
