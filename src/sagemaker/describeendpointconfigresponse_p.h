// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTCONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTCONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeEndpointConfigResponse;

class DescribeEndpointConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeEndpointConfigResponsePrivate(DescribeEndpointConfigResponse * const q);

    void parseDescribeEndpointConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointConfigResponse)
    Q_DISABLE_COPY(DescribeEndpointConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
