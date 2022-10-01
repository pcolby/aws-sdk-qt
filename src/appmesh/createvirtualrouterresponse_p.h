// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALROUTERRESPONSE_P_H
#define QTAWS_CREATEVIRTUALROUTERRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualRouterResponse;

class CreateVirtualRouterResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateVirtualRouterResponsePrivate(CreateVirtualRouterResponse * const q);

    void parseCreateVirtualRouterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVirtualRouterResponse)
    Q_DISABLE_COPY(CreateVirtualRouterResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
