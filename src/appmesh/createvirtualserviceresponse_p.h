// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALSERVICERESPONSE_P_H
#define QTAWS_CREATEVIRTUALSERVICERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualServiceResponse;

class CreateVirtualServiceResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateVirtualServiceResponsePrivate(CreateVirtualServiceResponse * const q);

    void parseCreateVirtualServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVirtualServiceResponse)
    Q_DISABLE_COPY(CreateVirtualServiceResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
