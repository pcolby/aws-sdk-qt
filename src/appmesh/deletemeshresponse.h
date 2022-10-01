// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESHRESPONSE_H
#define QTAWS_DELETEMESHRESPONSE_H

#include "appmeshresponse.h"
#include "deletemeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteMeshResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteMeshResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteMeshResponse(const DeleteMeshRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMeshRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMeshResponse)
    Q_DISABLE_COPY(DeleteMeshResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
