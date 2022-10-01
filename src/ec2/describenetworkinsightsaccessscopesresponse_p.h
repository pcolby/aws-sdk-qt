// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopesResponse;

class DescribeNetworkInsightsAccessScopesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInsightsAccessScopesResponsePrivate(DescribeNetworkInsightsAccessScopesResponse * const q);

    void parseDescribeNetworkInsightsAccessScopesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsAccessScopesResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsAccessScopesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
