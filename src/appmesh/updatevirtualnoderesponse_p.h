// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALNODERESPONSE_P_H
#define QTAWS_UPDATEVIRTUALNODERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualNodeResponse;

class UpdateVirtualNodeResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateVirtualNodeResponsePrivate(UpdateVirtualNodeResponse * const q);

    void parseUpdateVirtualNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualNodeResponse)
    Q_DISABLE_COPY(UpdateVirtualNodeResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
