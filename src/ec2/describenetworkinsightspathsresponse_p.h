// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSPATHSRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSPATHSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsPathsResponse;

class DescribeNetworkInsightsPathsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInsightsPathsResponsePrivate(DescribeNetworkInsightsPathsResponse * const q);

    void parseDescribeNetworkInsightsPathsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsPathsResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsPathsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
