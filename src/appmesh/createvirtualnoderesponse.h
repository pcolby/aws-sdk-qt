// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALNODERESPONSE_H
#define QTAWS_CREATEVIRTUALNODERESPONSE_H

#include "appmeshresponse.h"
#include "createvirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualNodeResponsePrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualNodeResponse : public AppMeshResponse {
    Q_OBJECT

public:
    CreateVirtualNodeResponse(const CreateVirtualNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVirtualNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualNodeResponse)
    Q_DISABLE_COPY(CreateVirtualNodeResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
