// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeEndpointResponse;

class DescribeEndpointResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeEndpointResponsePrivate(DescribeEndpointResponse * const q);

    void parseDescribeEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointResponse)
    Q_DISABLE_COPY(DescribeEndpointResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
