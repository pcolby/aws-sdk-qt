// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALNODERESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALNODERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualNodeResponse;

class DescribeVirtualNodeResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeVirtualNodeResponsePrivate(DescribeVirtualNodeResponse * const q);

    void parseDescribeVirtualNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualNodeResponse)
    Q_DISABLE_COPY(DescribeVirtualNodeResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
