// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESILIENCYPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBERESILIENCYPOLICYRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeResiliencyPolicyResponse;

class DescribeResiliencyPolicyResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DescribeResiliencyPolicyResponsePrivate(DescribeResiliencyPolicyResponse * const q);

    void parseDescribeResiliencyPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResiliencyPolicyResponse)
    Q_DISABLE_COPY(DescribeResiliencyPolicyResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
