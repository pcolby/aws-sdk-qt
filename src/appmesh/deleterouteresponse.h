// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSE_H
#define QTAWS_DELETEROUTERESPONSE_H

#include "appmeshresponse.h"
#include "deleterouterequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteRouteResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteRouteResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteRouteResponse(const DeleteRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteResponse)
    Q_DISABLE_COPY(DeleteRouteResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
