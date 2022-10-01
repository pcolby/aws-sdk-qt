// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALSERVICERESPONSE_P_H
#define QTAWS_UPDATEVIRTUALSERVICERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualServiceResponse;

class UpdateVirtualServiceResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateVirtualServiceResponsePrivate(UpdateVirtualServiceResponse * const q);

    void parseUpdateVirtualServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualServiceResponse)
    Q_DISABLE_COPY(UpdateVirtualServiceResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
