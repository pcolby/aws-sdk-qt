// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALSERVICERESPONSE_P_H
#define QTAWS_DELETEVIRTUALSERVICERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualServiceResponse;

class DeleteVirtualServiceResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteVirtualServiceResponsePrivate(DeleteVirtualServiceResponse * const q);

    void parseDeleteVirtualServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualServiceResponse)
    Q_DISABLE_COPY(DeleteVirtualServiceResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
