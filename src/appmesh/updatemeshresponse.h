// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMESHRESPONSE_H
#define QTAWS_UPDATEMESHRESPONSE_H

#include "appmeshresponse.h"
#include "updatemeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateMeshResponsePrivate;

class QTAWSAPPMESH_EXPORT UpdateMeshResponse : public AppMeshResponse {
    Q_OBJECT

public:
    UpdateMeshResponse(const UpdateMeshRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMeshRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMeshResponse)
    Q_DISABLE_COPY(UpdateMeshResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
