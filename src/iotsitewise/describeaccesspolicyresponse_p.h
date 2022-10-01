// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBEACCESSPOLICYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAccessPolicyResponse;

class DescribeAccessPolicyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeAccessPolicyResponsePrivate(DescribeAccessPolicyResponse * const q);

    void parseDescribeAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccessPolicyResponse)
    Q_DISABLE_COPY(DescribeAccessPolicyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
