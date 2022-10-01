// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMESHRESPONSE_P_H
#define QTAWS_UPDATEMESHRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateMeshResponse;

class UpdateMeshResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateMeshResponsePrivate(UpdateMeshResponse * const q);

    void parseUpdateMeshResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMeshResponse)
    Q_DISABLE_COPY(UpdateMeshResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
