// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALSERVICESRESPONSE_P_H
#define QTAWS_LISTVIRTUALSERVICESRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualServicesResponse;

class ListVirtualServicesResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit ListVirtualServicesResponsePrivate(ListVirtualServicesResponse * const q);

    void parseListVirtualServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualServicesResponse)
    Q_DISABLE_COPY(ListVirtualServicesResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
