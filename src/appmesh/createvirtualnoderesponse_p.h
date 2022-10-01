// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALNODERESPONSE_P_H
#define QTAWS_CREATEVIRTUALNODERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualNodeResponse;

class CreateVirtualNodeResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateVirtualNodeResponsePrivate(CreateVirtualNodeResponse * const q);

    void parseCreateVirtualNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVirtualNodeResponse)
    Q_DISABLE_COPY(CreateVirtualNodeResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
