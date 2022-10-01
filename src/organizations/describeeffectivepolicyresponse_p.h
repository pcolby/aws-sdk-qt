// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBEEFFECTIVEPOLICYRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribeEffectivePolicyResponse;

class DescribeEffectivePolicyResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribeEffectivePolicyResponsePrivate(DescribeEffectivePolicyResponse * const q);

    void parseDescribeEffectivePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEffectivePolicyResponse)
    Q_DISABLE_COPY(DescribeEffectivePolicyResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
