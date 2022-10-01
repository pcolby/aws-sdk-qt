// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSE_P_H
#define QTAWS_CREATEROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateRouteResponse;

class CreateRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateRouteResponsePrivate(CreateRouteResponse * const q);

    void parseCreateRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRouteResponse)
    Q_DISABLE_COPY(CreateRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
