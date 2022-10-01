// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORIGINENDPOINTRESPONSE_P_H
#define QTAWS_DESCRIBEORIGINENDPOINTRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class DescribeOriginEndpointResponse;

class DescribeOriginEndpointResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit DescribeOriginEndpointResponsePrivate(DescribeOriginEndpointResponse * const q);

    void parseDescribeOriginEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOriginEndpointResponse)
    Q_DISABLE_COPY(DescribeOriginEndpointResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
