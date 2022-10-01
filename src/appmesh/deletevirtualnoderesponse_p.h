// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALNODERESPONSE_P_H
#define QTAWS_DELETEVIRTUALNODERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualNodeResponse;

class DeleteVirtualNodeResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteVirtualNodeResponsePrivate(DeleteVirtualNodeResponse * const q);

    void parseDeleteVirtualNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualNodeResponse)
    Q_DISABLE_COPY(DeleteVirtualNodeResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
