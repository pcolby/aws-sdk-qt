// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeResourcePolicyResponse;

class DescribeResourcePolicyResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeResourcePolicyResponsePrivate(DescribeResourcePolicyResponse * const q);

    void parseDescribeResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePolicyResponse)
    Q_DISABLE_COPY(DescribeResourcePolicyResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
