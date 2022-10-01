// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMESHESRESPONSE_H
#define QTAWS_LISTMESHESRESPONSE_H

#include "appmeshresponse.h"
#include "listmeshesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListMeshesResponsePrivate;

class QTAWSAPPMESH_EXPORT ListMeshesResponse : public AppMeshResponse {
    Q_OBJECT

public:
    ListMeshesResponse(const ListMeshesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMeshesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMeshesResponse)
    Q_DISABLE_COPY(ListMeshesResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
