// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPOLICYREQUEST_P_H
#define QTAWS_DESCRIBEEFFECTIVEPOLICYREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describeeffectivepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeEffectivePolicyRequest;

class DescribeEffectivePolicyRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribeEffectivePolicyRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribeEffectivePolicyRequest * const q);
    DescribeEffectivePolicyRequestPrivate(const DescribeEffectivePolicyRequestPrivate &other,
                                   DescribeEffectivePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEffectivePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
