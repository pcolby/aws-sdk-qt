// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSANALYSESRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSANALYSESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAnalysesResponse;

class DescribeNetworkInsightsAnalysesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInsightsAnalysesResponsePrivate(DescribeNetworkInsightsAnalysesResponse * const q);

    void parseDescribeNetworkInsightsAnalysesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsAnalysesResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsAnalysesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
