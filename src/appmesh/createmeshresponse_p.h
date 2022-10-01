// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMESHRESPONSE_P_H
#define QTAWS_CREATEMESHRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateMeshResponse;

class CreateMeshResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateMeshResponsePrivate(CreateMeshResponse * const q);

    void parseCreateMeshResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMeshResponse)
    Q_DISABLE_COPY(CreateMeshResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
