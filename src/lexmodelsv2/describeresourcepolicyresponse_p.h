// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeResourcePolicyResponse;

class DescribeResourcePolicyResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeResourcePolicyResponsePrivate(DescribeResourcePolicyResponse * const q);

    void parseDescribeResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePolicyResponse)
    Q_DISABLE_COPY(DescribeResourcePolicyResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
