// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALROUTERRESPONSE_P_H
#define QTAWS_UPDATEVIRTUALROUTERRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualRouterResponse;

class UpdateVirtualRouterResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateVirtualRouterResponsePrivate(UpdateVirtualRouterResponse * const q);

    void parseUpdateVirtualRouterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualRouterResponse)
    Q_DISABLE_COPY(UpdateVirtualRouterResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
