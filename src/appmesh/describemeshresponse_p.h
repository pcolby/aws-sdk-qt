// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMESHRESPONSE_P_H
#define QTAWS_DESCRIBEMESHRESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeMeshResponse;

class DescribeMeshResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeMeshResponsePrivate(DescribeMeshResponse * const q);

    void parseDescribeMeshResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMeshResponse)
    Q_DISABLE_COPY(DescribeMeshResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
