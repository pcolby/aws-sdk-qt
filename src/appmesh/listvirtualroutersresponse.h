// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALROUTERSRESPONSE_H
#define QTAWS_LISTVIRTUALROUTERSRESPONSE_H

#include "appmeshresponse.h"
#include "listvirtualroutersrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualRoutersResponsePrivate;

class QTAWSAPPMESH_EXPORT ListVirtualRoutersResponse : public AppMeshResponse {
    Q_OBJECT

public:
    ListVirtualRoutersResponse(const ListVirtualRoutersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualRoutersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualRoutersResponse)
    Q_DISABLE_COPY(ListVirtualRoutersResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
