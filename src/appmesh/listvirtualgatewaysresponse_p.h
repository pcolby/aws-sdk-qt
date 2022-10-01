// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALGATEWAYSRESPONSE_P_H
#define QTAWS_LISTVIRTUALGATEWAYSRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualGatewaysResponse;

class ListVirtualGatewaysResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit ListVirtualGatewaysResponsePrivate(ListVirtualGatewaysResponse * const q);

    void parseListVirtualGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualGatewaysResponse)
    Q_DISABLE_COPY(ListVirtualGatewaysResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
