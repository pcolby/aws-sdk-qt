// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSE_P_H
#define QTAWS_DELETEROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteRouteResponse;

class DeleteRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteRouteResponsePrivate(DeleteRouteResponse * const q);

    void parseDeleteRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteResponse)
    Q_DISABLE_COPY(DeleteRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
