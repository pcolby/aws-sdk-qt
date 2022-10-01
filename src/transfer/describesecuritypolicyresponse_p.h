// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBESECURITYPOLICYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeSecurityPolicyResponse;

class DescribeSecurityPolicyResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeSecurityPolicyResponsePrivate(DescribeSecurityPolicyResponse * const q);

    void parseDescribeSecurityPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityPolicyResponse)
    Q_DISABLE_COPY(DescribeSecurityPolicyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
