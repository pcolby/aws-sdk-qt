// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONTARGETSREQUEST_P_H
#define QTAWS_DESCRIBEACTIONTARGETSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "describeactiontargetsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeActionTargetsRequest;

class DescribeActionTargetsRequestPrivate : public SecurityHubRequestPrivate {

public:
    DescribeActionTargetsRequestPrivate(const SecurityHubRequest::Action action,
                                   DescribeActionTargetsRequest * const q);
    DescribeActionTargetsRequestPrivate(const DescribeActionTargetsRequestPrivate &other,
                                   DescribeActionTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActionTargetsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
