// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMESHESRESPONSE_P_H
#define QTAWS_LISTMESHESRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class ListMeshesResponse;

class ListMeshesResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit ListMeshesResponsePrivate(ListMeshesResponse * const q);

    void parseListMeshesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMeshesResponse)
    Q_DISABLE_COPY(ListMeshesResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
