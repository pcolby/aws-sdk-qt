// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALROUTERSRESPONSE_P_H
#define QTAWS_LISTVIRTUALROUTERSRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualRoutersResponse;

class ListVirtualRoutersResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit ListVirtualRoutersResponsePrivate(ListVirtualRoutersResponse * const q);

    void parseListVirtualRoutersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualRoutersResponse)
    Q_DISABLE_COPY(ListVirtualRoutersResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
