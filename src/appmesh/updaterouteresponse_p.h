// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSE_P_H
#define QTAWS_UPDATEROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateRouteResponse;

class UpdateRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateRouteResponsePrivate(UpdateRouteResponse * const q);

    void parseUpdateRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRouteResponse)
    Q_DISABLE_COPY(UpdateRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
