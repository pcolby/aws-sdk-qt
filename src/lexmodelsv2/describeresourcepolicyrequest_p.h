// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYREQUEST_P_H
#define QTAWS_DESCRIBERESOURCEPOLICYREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describeresourcepolicyrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeResourcePolicyRequest;

class DescribeResourcePolicyRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeResourcePolicyRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeResourcePolicyRequest * const q);
    DescribeResourcePolicyRequestPrivate(const DescribeResourcePolicyRequestPrivate &other,
                                   DescribeResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
