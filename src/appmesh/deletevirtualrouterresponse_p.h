// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALROUTERRESPONSE_P_H
#define QTAWS_DELETEVIRTUALROUTERRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualRouterResponse;

class DeleteVirtualRouterResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteVirtualRouterResponsePrivate(DeleteVirtualRouterResponse * const q);

    void parseDeleteVirtualRouterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualRouterResponse)
    Q_DISABLE_COPY(DeleteVirtualRouterResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
