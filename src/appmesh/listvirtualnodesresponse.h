// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALNODESRESPONSE_H
#define QTAWS_LISTVIRTUALNODESRESPONSE_H

#include "appmeshresponse.h"
#include "listvirtualnodesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualNodesResponsePrivate;

class QTAWSAPPMESH_EXPORT ListVirtualNodesResponse : public AppMeshResponse {
    Q_OBJECT

public:
    ListVirtualNodesResponse(const ListVirtualNodesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualNodesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualNodesResponse)
    Q_DISABLE_COPY(ListVirtualNodesResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
