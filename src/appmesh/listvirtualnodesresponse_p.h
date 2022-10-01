// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALNODESRESPONSE_P_H
#define QTAWS_LISTVIRTUALNODESRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualNodesResponse;

class ListVirtualNodesResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit ListVirtualNodesResponsePrivate(ListVirtualNodesResponse * const q);

    void parseListVirtualNodesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualNodesResponse)
    Q_DISABLE_COPY(ListVirtualNodesResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
