// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALSERVICERESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALSERVICERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualServiceResponse;

class DescribeVirtualServiceResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeVirtualServiceResponsePrivate(DescribeVirtualServiceResponse * const q);

    void parseDescribeVirtualServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualServiceResponse)
    Q_DISABLE_COPY(DescribeVirtualServiceResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif
