// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUBREQUEST_P_H
#define QTAWS_DESCRIBEHUBREQUEST_P_H

#include "securityhubrequest_p.h"
#include "describehubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeHubRequest;

class DescribeHubRequestPrivate : public SecurityHubRequestPrivate {

public:
    DescribeHubRequestPrivate(const SecurityHubRequest::Action action,
                                   DescribeHubRequest * const q);
    DescribeHubRequestPrivate(const DescribeHubRequestPrivate &other,
                                   DescribeHubRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
