// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTLIMITSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeAccountLimitsResponse;

class DescribeAccountLimitsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeAccountLimitsResponsePrivate(DescribeAccountLimitsResponse * const q);

    void parseDescribeAccountLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountLimitsResponse)
    Q_DISABLE_COPY(DescribeAccountLimitsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
