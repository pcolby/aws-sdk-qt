// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESHRESPONSE_P_H
#define QTAWS_DELETEMESHRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteMeshResponse;

class DeleteMeshResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteMeshResponsePrivate(DeleteMeshResponse * const q);

    void parseDeleteMeshResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMeshResponse)
    Q_DISABLE_COPY(DeleteMeshResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
